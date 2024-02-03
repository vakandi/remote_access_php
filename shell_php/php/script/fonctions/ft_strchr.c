/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:57:35 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:00:41 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if ((unsigned char)s[x] == (unsigned char)c)
			return ((char *)s + x);
		x++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + x);
	return (NULL);
}
