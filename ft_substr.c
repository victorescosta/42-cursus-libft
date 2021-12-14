/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 09:49:06 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/05 00:38:14 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
	{
		return (NULL);
	}
	if (ft_strlen(s) <= len)
	{
		len = ft_strlen(s) - start;
	}
	if (ft_strlen(s) >= start)
	{
		sub = ft_calloc(len + 1, 1);
		if (sub == NULL)
		{
			return (NULL);
		}
		ft_strlcpy(sub, s + start, len + 1);
	}
	else
		sub = ft_strdup("");
	return (sub);
}
