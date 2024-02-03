/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:57:40 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:01:15 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len )
{
	size_t	x;
	size_t	b;

	x = 0;
	b = 0;
	if (((char *)needle)[x] == '\0')
	{
		return ((char *)haystack);
	}
	while (x < len && haystack[x])
	{
		if (haystack[x] == needle[b])
		{
			while ((haystack[x + b] == needle[b] && haystack[x + b])
				&& (x + b) < len)
				b++;
			if (needle[b] == '\0')
				return ((char *)haystack + x);
			else
				b = 0;
		}
		x++;
	}
	return (0);
}
