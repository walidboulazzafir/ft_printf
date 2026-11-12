/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboulazz <wboulazz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 13:00:39 by wboulazz          #+#    #+#             */
/*   Updated: 2026/11/07 10:38:39 by wboulazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_string;
	size_t	slen1;
	size_t	slen2;

	if (!s1 || !s2)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	n_string = malloc(slen1 + slen2 + 1);
	if (!n_string)
		return (NULL);
	ft_strlcpy(n_string, s1, slen1 + 1);
	ft_strlcpy(n_string + slen1, s2, slen2 + 1);
	return (n_string);
}
