/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 21:49:06 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/22 10:20:12 by wboulazz         ###   ########.fr       */
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

static int	process_format(const char *format, va_list args, int *count)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		if (format[i] == '%' && format[i + 1])
		{
			handle_formate(args, format[i + 1], count);
			if (*count == -1)
				return (-1);
			i += 2;
		}
		else
		{
			if (write(1, &format[i], 1) == -1)
				return (-1);
			i++;
			(*count)++;
		}
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	if (process_format(format, args, &count) == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (count);
}
