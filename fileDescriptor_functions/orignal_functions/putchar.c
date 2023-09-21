#include <stdio.h>

int     main(void)
{
    char    *str = "wassim is the best again...\n\0 and stop here";

    for (int i = 0;i < 128; i++)
        putchar(i);

    for (int j = 0; *(str + j); j++)
        putchar(str[j]);
    putchar('\t');
    putchar('\n');
}
