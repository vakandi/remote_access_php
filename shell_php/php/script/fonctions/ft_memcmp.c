/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:54:53 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:54:54 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s1)[x] == ((unsigned char *)s2)[x])
			x++;
		else
			return (x = ((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
	}
	return (0);
}
