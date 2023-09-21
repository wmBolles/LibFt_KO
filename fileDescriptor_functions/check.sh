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

gcc -Wall -Wextra -Werror orignal_functions/putchar.c -o putchar
gcc -Wall -Wextra -Werror libft_test/putchar.c ../../ft_putchar_fd.c -o fd_putchar_fd

./putchar > orputchar
./ft_putchar_fd > fdputchar

if diff -q  orputchar fdputchar >/dev/null; then
    echo -e "putchar : \033[32mOK\033[0m"
else
    echo -e "putchar : \033[31mKO\033[0m"
    diff orputchar fdputchar > diff_putchar_fd
    cat diff_putchar_fd

fi
rm orputchar fdputchar putchar fd_putchar_fd

cd ..
