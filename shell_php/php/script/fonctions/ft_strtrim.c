/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbousfir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:38 by wbousfir          #+#    #+#             */
/*   Updated: 2022/11/04 22:01:25 by wbousfir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*p;

	last = 0;
	first = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	if (s1[first] == '\0')
		return (ft_calloc(sizeof(char *), 1));
	last = ft_strlen(s1);
	while (ft_strchr(set, s1[last]))
	{
		last--;
	}
	p = ft_substr(s1, first, last - first + 1);
	return (p);
}
