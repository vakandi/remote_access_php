/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:30 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:56:31 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	len;

	len = ft_strlen(s1);
	x = 0;
	while (x < n && x <= len)
	{
		if (s1[x] != s2[x])
		{
			x = ((unsigned char *)s1)[x] -((unsigned char *)s2)[x];
			return (x);
		}
		x++;
	}
	return (0);
}
