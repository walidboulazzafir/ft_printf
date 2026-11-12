/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:28:52 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/08 11:18:50 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	free_split(char **newtab)
{
	int	i;

	i = 0;
	while (newtab[i])
	{
		free(newtab[i]);
		i++;
	}
	free(newtab);
}

static int	fill_words(char **newtab, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			newtab[j] = ft_substr(s, start, i - start);
			if (!newtab[j])
				return (0);
			j++;
		}
	}
	newtab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**newtab;
	int		words;
	if (!s)
		return (NULL);
	words = count_word(s, c);
	newtab = malloc((words + 1) * sizeof(char *));
	if (!newtab)
		return (NULL);
	
	if (!fill_words(newtab, s, c))
	{
		free_split(newtab);
		return (NULL);
	}
	return (newtab);
}
