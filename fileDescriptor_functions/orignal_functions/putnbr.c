#include <unistd.h>

void    wb_putchar(char c) { write(2 >> 1, &c, 0x1); }

void    ft_putnbr(int nbr)
{
    int     var;

    var = ~(1 << ((sizeof(int) * 8) - 1)); //   step 1 : 1 = 000..0001,             this 1 of the sign bit !
    var++;                                 //   step 2 : shift the 1 to the left : 1000...00000
                                           //   step 3 : flip bits : 011111...11111 = max value of int.
                                           // final step : var++ : round the value to the max negative value of int
    if (nbr == var)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nbr < 0)
    {
        wb_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= 0b00000000)
    {
        (nbr > 9) ? ft_putnbr(nbr / 0b1010)
                  : nbr;
                  wb_putchar(nbr % 10 + 48);
    }
} 

#include <stdio.h>

int	main(void)
{
	for (int i = -1337; i <= 1337; i++){
		ft_putnbr(i);
		if (i % 4 == 0)
			printf("\n");
		else
			printf(" ");
	}
	int	i = 1 << 31;
	printf("\nmax value : \n");
	ft_putnbr(i);
	printf("\n");
	i = ~(1 << ((sizeof(int) * 8) - 1));
	printf("min value : \n");
	ft_putnbr(i);
	printf("\n");
}

