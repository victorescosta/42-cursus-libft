/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:23:55 by veugenio          #+#    #+#             */
/*   Updated: 2021/12/10 13:38:50 by veugenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_getsize(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
	{
		return (size = 1);
	}
	if (n == -2147483648)
	{
		return (size = 11);
	}
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*nbr(long int n, char *new_str, size_t size)
{
	if (n < 0)
	{
		new_str[0] = '-';
		n *= -1;
	}
	size--;
	if (n >= 10)
	{
		nbr((n / 10), new_str, size);
	}
	new_str[size] = (n % 10) + '0';
	return (new_str);
}

char	*ft_itoa(int n)
{
	char		*nword;
	size_t		size;
	long int	n2;

	n2 = n;
	size = ft_getsize(n);
	nword = malloc(sizeof(char) * (size + 1));
	if (!nword)
	{
		return (NULL);
	}
	nword[size] = '\0';
	nbr(n2, nword, size);
	return (nword);
}
