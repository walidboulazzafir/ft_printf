/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:31:54 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/21 17:55:31 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_digits(size_t nb, char *hex, int *count)
{
	size_t	div;
	size_t	nbr;

	div = 1;
	while (nb / div >= 16)
		div *= 16;
	while (div > 0)
	{
		nbr = nb / div;
		if (write(1, &hex[nbr], 1) == -1)
		{
			*count = -1;
			return ;
		}
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
