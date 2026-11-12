/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 07:28:29 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/07 10:38:51 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;
	char			newchr;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	newstr = malloc(len + 1);
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		newchr = f(i, s[i]);
		newstr[i] = newchr;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
