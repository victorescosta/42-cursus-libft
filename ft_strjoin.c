/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:24:32 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/05 00:55:00 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sjoin = malloc (len1 + len2 + 1);
	if (sjoin == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(sjoin, s1, len1 + 1);
	ft_strlcpy(sjoin + len1, s2, len2 + 1);
	return (sjoin);
}
