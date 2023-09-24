#!/bin/bash

gcc -Wall -Wextra -Werror orignal_functions/puts.c -o outputs/puts
gcc -Wall -Wextra -Werror libft_test/puts.c  ../../ft_*.c -o outputs/putstr

cd outputs
./puts > puts_output.txt
./putstr > putstr_output.txt

if diff -q puts_output.txt putstr_output.txt >/dev/null; then
    echo -e "ft_putstr : \033[32mOK\033[0m"
else
    echo -e "ft_putstr : \033[31mKO\033[0m"
    diff -q puts_output.txt putstr_output.txt > ../traces/dputs.diff
    cat ../traces/puts.diff
fi

rm puts_output.txt putstr_output.txt puts putstr
cd ..

