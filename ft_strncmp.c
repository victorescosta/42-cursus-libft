/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:15:15 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/09 19:12:30 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (str1 == str2 || size == 0)
	{
		return (0);
	}
	while (i < size)
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
		{
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		}
		i++;
	}
	return (0);
}
