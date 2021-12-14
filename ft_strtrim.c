/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:32:43 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/10 12:18:54 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_size;
	char	*nword;

	if (!s1 || !set)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	str_size = ft_strlen(s1);
	while (str_size && ft_strchr(set, s1[str_size]))
	{
		str_size--;
	}
	nword = ft_substr((char *)s1, 0, str_size + 1);
	return (nword);
}
