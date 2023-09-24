#!/bin/bash

cd outputs
gcc -Wall -Wextra -Werror ../libft_test/putnbr.c ../../../ft_putnbr_fd.c ../../../ft_putchar_fd.c ../../../ft_putstr_fd.c -o ft_putnbr.out
gcc -Wall -Wextra -Werror ../orignal_functions/putnbr.c -o putnbr.out

./putnbr.out > orputnbr
./ft_putnbr.out > fdputnbr

if diff -q  orputnbr fdputnbr >/dev/null; then
    echo -e "ft_putnbr : \033[32mOK\033[0m"
else
    echo -e "ft_putnbr : \033[31mKO\033[0m"
    diff orputchar fdputchar > outputs/diff_putchar_fd
    cat diff_putchar_fd

fi
cd ..
