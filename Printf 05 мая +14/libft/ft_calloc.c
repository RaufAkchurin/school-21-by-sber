#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	char	*str_tmp;

	str = (void *) malloc((sizeof(char)) * (count * size));
	if (str == NULL)
		return (NULL);
	str_tmp = (char *) str;
	ft_bzero(str, count * size);
	return (str);
}
