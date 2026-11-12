/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 21:49:06 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/12 21:49:07 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	len_nbr(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (nb <= 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int			i;
	char		*current;
	int			nbr;
	int			count;

	i = 0;
	count = 0;
	va_start(list, format);
	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			count++;
			i++;
		}
		if (format[i] == '\0')
			break ;
		if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			nbr = va_arg(list, int);
			ft_putnbr_fd(nbr, 1);
			count += len_nbr(nbr);
			i += 2;
		}
		else if (format[i + 1] == 'c')
		{
			ft_putchar_fd(va_arg(list, int), 1);
			count++;
			i += 2;
		}
		else if (format[i + 1] == 's')
		{
			current = va_arg(list, char *);
			if (current == NULL)
				current = "(null)";
			ft_putstr_fd(current, 1);
			count += ft_strlen(current);
			i += 2;
		}
		else if (format[i + 1] == '%')
		{
			ft_putchar_fd('%', 1);
			count++;
			i += 2;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
			i++;
		}
	}
	va_end(list);
	return (count);
}
