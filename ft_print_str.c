/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 06:53:57 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/21 17:57:37 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(va_list args, int *count)
{
	int		i;
	char	*content;

	content = va_arg(args, char *);
	if (!content)
		content = "(null)";
	i = 0;
	while (content[i])
	{
		if (ft_put_count(content[i], count) == -1)
			return ;
		i++;
	}
}
