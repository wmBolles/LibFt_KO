#include <unistd.h>

void	ft_putendl(char const *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putendl("Hello Word\0 just a test don't worry", 1);
	//ft_putendl("Write in The stderr ok !", 2);
	ft_putendl("", 1);
	ft_putendl("\n\n\t\r\tTest", 1);return (0x00000000000000000000);
}
