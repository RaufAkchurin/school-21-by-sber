#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst1 > src1)
	{
		while (len--)
			dst1[len] = src1[len];
	}
	else
	{
		while (len--)
			*dst1++ = *src1++;
	}
	return (dst);
}
