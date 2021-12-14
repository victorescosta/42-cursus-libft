/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:18:53 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/29 22:14:42 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
