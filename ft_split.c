/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:55:03 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/09 19:00:52 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_nb(char const *str, char c)
{
	int		dlmt;

	dlmt = 0;
	while (*str)
	{
		while (*str == c)
		{
			str++;
		}
		if (*str && (*str != c))
		{
			dlmt++;
		}
		while (*str && (*str != c))
		{
			str++;
		}
	}
	return (dlmt);
}

static int	ft_word_size(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	sizewords;
	size_t	i;

	i = 0;
	words = malloc(sizeof(char *) * (ft_words_nb(s, c) + 1));
	if (!words)
		return (NULL);
	while (*s)
	{
		sizewords = ft_word_size(s, c);
		if (*s != c)
		{
			words[i] = ft_substr(s, 0, sizewords);
			if (!words[i])
				return (NULL);
			s += sizewords;
			i++;
		}
		while (*s && (*s == c))
			s++;
	}
	words[i] = NULL;
	return (words);
}
