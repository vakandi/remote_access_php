/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:55:58 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 21:55:59 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	p = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, ft_strlen(s2));
	return (p);
}
