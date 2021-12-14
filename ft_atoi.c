/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:01:43 by veugenio          #+#    #+#             */
/*   Updated: 2021/11/13 19:30:58 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			neg = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = ((nb * 10 + (*str++ - '0')));
	}
	return (nb * neg);
}
