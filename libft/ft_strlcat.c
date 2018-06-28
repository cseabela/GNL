/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:22:29 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:22:35 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t grand;
	size_t star;

	star = size;
	grand = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + star);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (grand);
	return (0);
}
