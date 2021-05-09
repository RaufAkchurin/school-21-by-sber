int	ft_isascii(int c)
{
	if (c <= 0177 && c >= 0)
		return (1);
	else
		return (0);
}
