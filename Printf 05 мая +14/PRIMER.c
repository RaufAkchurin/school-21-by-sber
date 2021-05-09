#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int g_result;
int g_width;
int g_dot;

int	ft_printf (const char *str, ...)
{
	g_result = 0;
	int	i = 0;
	va_list ap;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i+1] != '\0')
		{
				g_width = 0;
				g_dot = -1;
				while (str[i] >= '0' && str[i] <= '9')
				{
					g_width = g_width * 10 + (g_width - '0');
					i++;
				}
		
		if (str[i] == '.')
			{
			g_dot = 0;
			i++;
			while (str[i] >= '0' && str[i] <= '9')
			{
				g_dot = g_dot * 10 + (g_dot - '0');
				i++;
			}

			if (str[i] == 's')
				ft_printf_s(va_arg(ap, char*));
			else if (str[i] == 'x')
				ft_printf_x(va_arg(ap, unsigned int));
			else if (str[i] == 'd')
				ft_printf_d(va_arg(ap, int));
			else
				ft_putchar(str[i])
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	
	va_end(ap);
	return (g_result);
}

/* delete befor upload */

#include <stdio.h>

int	main(void)
{
	printf("%10.2s\n", "toto");
	printf("Magic %s is 5d", "number\n", 42);
	printf("Haxademical for %d is %x\n", 42, 42);
}