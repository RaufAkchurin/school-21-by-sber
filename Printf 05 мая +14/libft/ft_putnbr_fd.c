#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[15];
	int		i;
	int		negative;
	long	n1;

	n1 = (long) n;
	negative = 1;
	i = 0;
	if (n1 == 0)
		ft_putchar_fd('0', fd);
	if (n1 < 0)
	{
		n1 = n1 * -1;
		negative = -1;
	}
	while (n1)
	{
		str[i++] = (n1 % 10) + '0';
		n1 /= 10;
	}
	str[i--] = '\0';
	if (negative == -1)
		ft_putchar_fd('-', fd);
	while (i >= 0)
		ft_putchar_fd(str[i--], fd);
}
