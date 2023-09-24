#!/bin/bash

cd outputs
gcc -Wall -Wextra -Werror ../libft_test/putnbr.c ../../../ft_putnbr_fd.c ../../../ft_putchar_fd.c ../../../ft_putstr_fd.c -o ft_putnbr.out
gcc -Wall -Wextra -Werror ../orignal_functions/putnbr.c -o putnbr.out

./putnbr.out > orputnbr
./ft_putnbr.out > fdputnbr

if diff -q  orputnbr fdputnbr >/dev/null; then
    echo -e "ft_putnbr : \033[32mOK\033[0m"
else
    echo -e "\033[31mft_putnbr\033[0m : \033[31mKO\033[0m"
    diff orputnbr fdputnbr > ../traces/putnbr.diff
    echo -e "\033[31mCheck the Traces! and fix your function\033[0m"
fi

./clean.sh
cd ..
