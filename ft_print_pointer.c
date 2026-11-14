/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 08:37:43 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:59:24 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(va_list args, int *count)
{
	void		*p;
	uintptr_t	nb;

	p = va_arg(args, void *);
	if (!p)
	{
		write(1, "(nil)", 5);
		(*count) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*count) += 2;
	nb = (uintptr_t)p;
	print_hex_digits(nb, "0123456789abcdef", count);
}
