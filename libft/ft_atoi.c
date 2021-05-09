#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	unsigned long	number;
	unsigned long	a;

	a = 9223372036854775807;
	negative = 1;
	number = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		number = (number * 10) + str[i] -'0';
		i++;
		if (number > a && negative == 1)
			return (-1);
		else if (number > a && negative == -1)
			return (0);
	}
	return ((long long) number * negative);
}
