/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 06:58:38 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:59:22 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(va_list args, int *count)
{
	long	nb;
	long	div;
	char	digit;

	div = 1;
	nb = va_arg(args, int);
	if (nb < 0)
	{
		write(1, "-", 1);
		(*count)++;
		nb *= -1;
	}
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		digit = (nb / div) + '0';
		write(1, &digit, 1);
		nb %= div;
		div /= 10;
		(*count)++;
	}
}
