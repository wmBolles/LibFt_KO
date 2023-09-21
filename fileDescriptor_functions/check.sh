#!/bin/bash

gcc -Wall -Wextra -Werror orignal_functions/puts.c -o outputs/puts
gcc -Wall -Wextra -Werror libft_test/puts.c ../../ft_putstr_fd.c ../../ft_strlen.c -o outputs/putstr

cd outputs
./puts > puts_output.txt
./putstr > putstr_output.txt

if diff -q puts_output.txt putstr_output.txt >/dev/null; then
    echo -e "putstr : \033[32mOK\033[0m"
else
    echo -e "putstr : \033[31mKO\033[0m"
    diff -q puts_output.txt putstr_output.txt > diff
    cat diff
fi

rm puts_output.txt putstr_output.txt puts putstr
cd ..

./checkchar.sh
