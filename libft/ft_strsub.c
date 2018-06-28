/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:31:24 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:31:30 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*blank;

	i = 0;
	if (!s)
		return (NULL);
	blank = ft_strnew(len);
	if (!blank)
		return (NULL);
	if (s)
	{
		while (i != len)
		{
			blank[i] = s[start + i];
			i++;
		}
	}
	blank[len] = '\0';
	return (blank);
}
