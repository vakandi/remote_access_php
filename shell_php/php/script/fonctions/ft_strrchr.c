/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:34 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:56:35 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	if ((unsigned char)c == 0)
		return ((char *)s + x);
	x--;
	while (x >= 0)
	{
		if (s[x] == (unsigned char)c)
			return ((char *)s + x);
		x--;
	}
	return (NULL);
}
