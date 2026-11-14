/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 21:49:06 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:59:31 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_formate(va_list args, char format, int *count)
{
	if (format == 'c' || format == '%')
		ft_print_char(args, count, format);
	else if (format == 's')
		ft_print_str(args, count);
	else if (format == 'd' || format == 'i')
		ft_print_nbr(args, count);
	else if (format == 'u')
		ft_print_unsigned(args, count);
	else if (format == 'x' || format == 'X')
		ft_print_hex(args, count, format);
	else if (format == 'p')
		ft_print_pointer(args, count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			handle_formate(args, format[i + 1], &count);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
