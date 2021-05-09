#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
