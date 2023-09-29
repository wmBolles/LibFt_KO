#!/bin/bash

cd outputs
gcc -Wall -Wextra -Werror ../libft_test/putendl.c ../../../ft_*.c -o ft_putendl.out
gcc -Wall -Wextra -Werror ../orignal_functions/putendl.c -o putendl.out

./putendl.out > orputendl
./ft_putendl.out > fdputendl

if diff -q  orputendl fdputendl >/dev/null; then
    echo -e "ft_putendl : \033[32mOK\033[0m"
else
    echo -e "\033[31mft_putendl\033[0m : \033[31mKO\033[0m"
    diff ./orputnbr ./fdputnbr > ../traces/putnbr.diff
    echo -e "\033[31mCheck the Traces! and fix your function\033[0m"
fi

./clean.sh
cd ..
