#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src1;
	unsigned char	*dst1;

	src1 = (unsigned char *) src;
	dst1 = (unsigned char *) dst;
	while (n > 0)
	{
		*dst1 = *src1;
		dst1++;
		if (*src1 == (unsigned char)c)
			return (dst1);
		n--;
		src1++;
	}
	return (NULL);
}
