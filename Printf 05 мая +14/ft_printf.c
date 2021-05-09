#include "printf.h"

int	ft_printf (const char *str)
{
	t_list2 flags;

	flags = list_init();
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i+1] != '\0')
			{
				if(str[++i] == '-')
					flags.minus = '-';
				if(str[++i] <= '9' && str[i] >= '0')
					flags.

				if (str[++i] == 'd')
					flags.flag = 'd';
			}
		i++;
	}
	write (1, &flags.minus, 1);
	write (1, "\n", 1);
	write (1, &flags.flag, 1);
	write (1, "\n", 1);

	return (1);
}

int	main (void)
{
	ft_printf("%-5d");
}
