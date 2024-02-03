/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:55:55 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:55:55 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		x;

	x = 0;
	p = ft_calloc(ft_strlen((char *)s1) + 1, sizeof(char));
	if (!(p))
		return (NULL);
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	return (p);
}
