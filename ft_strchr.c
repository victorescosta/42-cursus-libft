/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:54:38 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/29 22:09:33 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if ((unsigned char) *str == (unsigned char) c)
		{
			return ((char *) str);
		}
		str++;
	}
	if (c == 0)
	{
		return ((char *) str);
	}
	return (NULL);
}
