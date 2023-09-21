#include "../../../libft.h"

int     main(void)
{
    char    *str = "wassim is the best again...\n\0 and stop here";

    for (int i = 0;i < 128; i++)
        ft_putchar_fd(i, 1);

    for (int j = 0; *(str + j); j++)
        ft_putchar_fd(str[j], 1);
    ft_putchar_fd('\t', 1);
    ft_putchar_fd('\n', 1);
}
