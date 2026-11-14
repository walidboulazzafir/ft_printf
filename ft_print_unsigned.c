/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:22:33 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:59:29 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(va_list args, int *count)
{
	unsigned int	nb;
	unsigned int	div;
	char			digit;

	nb = va_arg(args, unsigned int);
	div = 1;
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
