/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:24:23 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:24:29 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out;
	char *one;

	if (f && s)
	{
		one = ft_strnew(ft_strlen(s));
		if (!one)
			return (NULL);
		out = one;
		while (*s != 0)
		{
			*out++ = f(*s++);
		}
		return (one);
	}
	return (NULL);
}
