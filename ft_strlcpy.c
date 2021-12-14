/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:01:57 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/11 14:45:02 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size > len + 1)
	{
		ft_memmove(dest, src, len + 1);
	}
	else if (size != 0)
	{
		ft_memmove(dest, src, size);
		dest[size - 1] = 0;
	}
	return (len);
}
