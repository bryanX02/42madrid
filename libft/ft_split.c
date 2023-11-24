
#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (s[cur] != 0)
	{
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
			word_num++;
		cur++;
	}
	return (word_num);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int		first;
	int		last;

	first = 0;
	last = 0;
	while (s[first])
	{
		if (s[first] == c || s[first] == 0)
			last = first + 1;
		if (s[first] != c && (s[first + 1] == c || s[first + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (first - last + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + last), first - last + 2);
			word++;
		}
		first++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!split)
		return (NULL);
	if (!split_words(split, s, c, 0))
		return (NULL);
	return (split);
}
