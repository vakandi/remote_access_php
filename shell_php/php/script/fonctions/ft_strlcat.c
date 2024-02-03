/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:12 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:00:50 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	len_dest;
	size_t	len_source;
	size_t	i;

	x = 0;
	len_source = ft_strlen(src);
	if (dstsize == 0)
		return (len_source);
	i = ft_strlen(dst);
	len_dest = ft_strlen(dst);
	if (dstsize < len_dest)
		return (len_source + dstsize);
	while (src[x] && i < dstsize - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (len_dest + len_source);
}
