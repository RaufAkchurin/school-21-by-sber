#include "libft.h"

static int	prov(const char *haystack, const char *needle, size_t len)
{
	while (*needle && len)
	{
		if (*needle != *haystack)
		{
			return (0);
		}
		haystack++;
		needle++;
		len--;
	}
	if (*needle != '\0')
	{
		return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *) haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			if (prov(haystack, needle, len))
			{
				return ((char *) haystack);
			}
		}
		len--;
		haystack++;
	}
	return (NULL);
}
