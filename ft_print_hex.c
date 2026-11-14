/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:31:54 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:59:19 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_digits(uintptr_t nb, char *hex, int *count)
{
	uintptr_t	div;
	uintptr_t	nbr;

	div = 1;
	while (nb / div >= 16)
		div *= 16;
	while (div > 0)
	{
		nbr = nb / div;
		write(1, &hex[nbr], 1);
		nb %= div;
		div /= 16;
		(*count)++;
	}
}

void	ft_print_hex(va_list args, int *count, char format)
{
	char			*hex;
	unsigned int	nb;

	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	nb = va_arg(args, unsigned int);
	print_hex_digits(nb, hex, count);
}
