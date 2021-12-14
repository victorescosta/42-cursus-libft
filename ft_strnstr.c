/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:28:30 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/05 00:48:29 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < size)
	{
		j = 0;
		while (big[i + j] == little[j] && (j + i) < size)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *) &big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
