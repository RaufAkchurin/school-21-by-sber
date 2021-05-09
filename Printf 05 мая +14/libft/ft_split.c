#include "libft.h"

static	size_t	c_words (char const *s, char c)
{
	size_t	cnt_w;
	int		flag;
	int		flag_old;

	flag = 1;
	flag_old = 1;
	cnt_w = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 1;
		else
			flag = 0;
		if (flag != flag_old)
			cnt_w += 1;
		flag_old = flag;
		s++;
	}
	if (s[ft_strlen(s) - 1] != 'c')
		cnt_w += 1;
	return (cnt_w / 2);
}

static void	ft_free (char **mass, size_t step)
{
	size_t	step_now;

	step_now = 0;
	while (step_now <= step)
	{
		free(mass[step_now]);
		step_now++;
	}
	free(mass);
	return ;
}

static void	s_chars (char const *s, char c, size_t c_words, char **mass)
{
	size_t	i;
	size_t	i_temp;
	size_t	res;
	size_t	step;

	i = 0;
	step = 0;
	while (step < c_words && s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		i_temp = i;
		while (s[i] && s[i] != c)
			i++;
		res = i - i_temp;
		if (i > i_temp)
		{
			mass[step] = (char *) malloc (sizeof(char) * (res + 1));
			if (!mass)
				ft_free (mass, step);
			ft_strlcpy(mass[step], &s[i_temp], i - i_temp + 1);
		}
		step++;
	}
	mass[step] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**mass;
	size_t	words;

	if (!s)
		return (0);
	words = c_words(s, c);
	mass = (char **) malloc(sizeof(char *) * (words + 1));
	if (mass == NULL)
		return (NULL);
	s_chars(s, c, words, mass);
	return (mass);
}
