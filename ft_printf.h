/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 20:39:38 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/14 08:55:18 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
size_t	ft_strlen(const char *s);
void	ft_print_char(va_list args, int *count, char format);
void	ft_print_str(va_list args, int *count);
void	ft_print_nbr(va_list args, int *count);
void	ft_print_unsigned(va_list args, int *count);
void	ft_print_hex(va_list args, int *count, char format);
void	ft_print_pointer(va_list args, int *count);
void	print_hex_digits(unsigned int nb, char *hex, int *count);

#endif
