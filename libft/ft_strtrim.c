#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*res;

	if (!s1)
		return ((char *)s1);
	if (!s1 && !set)
		return ((char *)s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && len > 0)
		len--;
	res = ft_substr(s1, 0, len);
	if (!res)
		return (ft_calloc(1, 1));
	return (res);
}
