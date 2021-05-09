#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*b1;

	b1 = (char *)b;
	i = 0;
	while (len > 0)
	{
		b1[i] = c;
		i++;
		len--;
	}
	return (b1);
}
