/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 06:58:38 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/21 18:02:46 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_count(char c, int *count)
{
	if (write(1, &c, 1) == -1)
	{
		*count = -1;
		return (-1);
	}
	(*count)++;
	return (0);
}

void	ft_print_nbr(va_list args, int *count)
{
	long	nb;
	long	div;

	div = 1;
	nb = va_arg(args, int);
	if (nb < 0)
	{
		if (ft_put_count('-', count) == -1)
			return ;
		nb *= -1;
	}
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		if (ft_put_count((nb / div) + '0', count) == -1)
			return ;
		nb %= div;
		div /= 10;
	}
}
