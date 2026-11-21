/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 07:22:33 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/21 18:23:56 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(va_list args, int *count)
{
	unsigned int	nb;
	unsigned int	div;

	nb = va_arg(args, unsigned int);
	div = 1;
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
