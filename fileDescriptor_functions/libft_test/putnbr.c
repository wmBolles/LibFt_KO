#include "../../../libft.h"
#include <stdio.h>

int	main(void)
{
	for (int i = -1337; i <= 1337; i++){
		ft_putnbr_fd(i, 1);
		if (i % 4 == 0)
			printf("\n");
		else
			printf(" ");
	}
	int	i = 1 << 31;
	printf("\nmax value : \n");
	ft_putnbr_fd(i, 1);
	printf("\n");
	i = ~(1 << ((sizeof(int) * 8) - 1));
	printf("min value : \n");
	ft_putnbr_fd(i, 1);
	printf("\n");
}
