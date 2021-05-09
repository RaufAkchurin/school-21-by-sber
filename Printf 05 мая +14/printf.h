#ifndef PRINTF_H
# define PRINTF_H

# include <strings.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_list2
{
	int		minus;
	int		flag;
	int		weigdt;
	int		dot;
	int		len;
	char	type;	
}				t_list2;

t_list2	list_init(void);
void	ft_putchar(char c);
int		ft_printf (const char *str);


#endif