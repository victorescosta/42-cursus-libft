/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:45:28 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/09 19:10:58 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*temp;
	char	*dst;

	temp = (char *)src;
	dst = (char *)dest;
	if (temp < dst)
	{
		while (size--)
		{
			dst[size] = temp[size];
		}
	}
	else
	{
		ft_memcpy(dst, temp, size);
	}
	return (dest);
}
