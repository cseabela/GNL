/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:09:03 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:09:11 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char*)src;
	j = (unsigned char*)dst;
	while (n-- > 0)
	{
		*j = *i;
		if (*i == (unsigned char)c)
			return ((void*)j + 1);
		i++;
		j++;
	}
	return (NULL);
}
