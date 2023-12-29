/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bquilumb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:43:42 by bquilumb          #+#    #+#             */
/*   Updated: 2023/11/29 12:43:09 by bquilumb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(const char *words_str, char c)
{
	int		num;
	short	next_word;

	num = 0;
	next_word = 0;
	while (*words_str)
	{
		if (*words_str != c && next_word == 0)
		{
			next_word = 1;
			num++;
		}
		else if (*words_str == c)
			next_word = 0;
		words_str++;
	}
	return (num);
}

static size_t	word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_words(size_t i, char **words)
{
	while (i)
	{
		free(*(words + i - 1));
		i--;
	}
	free(words);
}

static char	**spliter(char const *string, char c, char **words, size_t num_w)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < num_w)
	{
		while (*(string + j) && *(string + j) == c)
			j++;
		*(words + i) = ft_substr(string, j, word_size(string + j, c));
		if (!*(words + i))
		{
			free_words(i, words);
			return (NULL);
		}
		while (*(string + j) && *(string + j) != c)
			j++;
		i++;
	}
	*(words + i) = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	num_w;

	if (!s)
		return (NULL);
	num_w = num_words(s, c);
	words = (char **)malloc(sizeof(char *) * (num_w + 1));
	if (!words)
		return (NULL);
	words = spliter(s, c, words, num_w);
	return (words);
}
