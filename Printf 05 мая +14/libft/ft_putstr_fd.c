#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ((void)0);
	while (i < (int) ft_strlen(s))
	{
		write (fd, &s[i], 1);
		i++;
	}
}
