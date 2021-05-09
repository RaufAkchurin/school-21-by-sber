#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dst1;
	char			*src1;
	unsigned long	i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
