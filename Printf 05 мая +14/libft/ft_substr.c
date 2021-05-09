#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	tmp = (char *) malloc((sizeof(char)) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (i < len)
	{
		tmp[k++] = s[i++ + (size_t)start];
	}
	tmp[k] = '\0';
	return (tmp);
}
