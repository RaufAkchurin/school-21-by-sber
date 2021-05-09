#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cha;

	i = 0;
	cha = (char)c;
	while (s[i])
	{
		if (s[i] == cha)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == cha)
		return ((char *)s + i);
	return (0);
}
