/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 06:29:20 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/21 13:48:43 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(va_list args, int *count, char format)
{
	char	c;

	if (format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
	}
	else
		write(1, "%", 1);
	(*count)++;
}
