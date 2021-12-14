/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:45:29 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/29 20:52:10 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(str);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
	{
		return (0);
	}
	size = 0;
	while (str[size] != '\0')
	{
		dest[size] = str[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
