/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 10:37:07 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/07 12:45:29 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb <= 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*number;
	long	nb;
	int		len;

	nb = n;
	len = len_nbr(n);
	number = malloc(len + 1);
	if (!number)
		return (NULL);
	number[len] = '\0';
	if (nb < 0)
	{
		number[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		number[0] = '0';
	while (nb > 0)
	{
		number[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}
