#!/bin/bash

cd outputs

gcc -Wall -Wextra -Werror ../orignal_functions/putchar.c -o putchar
gcc -Wall -Wextra -Werror ../libft_test/putchar.c  ../../../ft_*.c -o ft_putchar_fd

./putchar > orputchar
./ft_putchar_fd > fdputchar

if diff -q  orputchar fdputchar >/dev/null; then
    echo -e "ft_putchar : \033[32mOK\033[0m"
else
    echo -e "ft_putchar : \033[31mKO\033[0m"
    diff orputchar fdputchar > ../traces/diff_putchar_fd
    cat ../traces/diff_putchar_fd

fi
rm orputchar fdputchar putchar ft_putchar_fd

cd ..
