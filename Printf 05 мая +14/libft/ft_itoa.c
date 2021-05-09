#include "libft.h"

static char	*rev (char *num, int len_i)
{	
	int		i;
	char	num_rev[15];

	if (num[0] == '-')
	{
		num_rev[0] = '-';
		i = 1;
		while (num[i] != '\0')
			num_rev[i++] = num[len_i-- -1];
	}
	else
	{	
		i = 0;
		while (num[i] != '\0')
			num_rev[i++] = num[len_i-- -1];
	}
	num_rev[i] = '\0';
	i = 0;
	while (num_rev[i] != '\0')
	{
		num[i] = num_rev[i];
		i++;
	}
	num[i] = '\0';
	return (num);
}

static int	len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	long	n_mod;

	n_mod = (long) n;
	num = (char *) malloc ((sizeof(char)) * len(n) + 1);
	if (num == NULL)
		return (NULL);
	i = 0;
	if (n_mod == 0)
		num[i++] = '0';
	if (n_mod < 0)
	{
		num[i++] = '-';
		n_mod *= -1;
	}
	while (n_mod)
	{
		num[i++] = (char)(n_mod % 10 + '0');
		n_mod /= 10;
	}
	num[i] = '\0';
	rev (num, len(n));
	return (num);
}
