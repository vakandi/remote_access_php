/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:27 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:56:28 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		x;

	if (!s)
		return (NULL);
	p = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!p)
		return (NULL);
	x = 0;
	while (s[x])
	{
		p[x] = f(x, s[x]);
		x++;
	}
	return (p);
}
