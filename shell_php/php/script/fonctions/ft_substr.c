/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:42 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:56:43 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	x;
	size_t	u;

	if (!s)
		return (NULL);
	u = len;
	x = 0;
	if (len > ft_strlen(s))
		u = ft_strlen(s);
	p = ft_calloc((u + 1), 1);
	if (!p)
		return (0);
	if (start <= ft_strlen(s))
	{
		while (x < len && start <= ft_strlen(s))
			p[x++] = s[start++];
	}
	return (p);
}
