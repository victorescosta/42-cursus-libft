/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:59:26 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/09 19:10:39 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	tlen;

	tlen = ft_strlen(dest) + ft_strlen(src);
	if (size <= ft_strlen(dest))
	{
		return (ft_strlen(src) + size);
	}
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while ((i < size - (tlen - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (tlen);
}
