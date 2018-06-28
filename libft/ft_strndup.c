/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:27:40 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:27:49 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s, size_t n)
{
	char	*blank;

	if (!(blank = ft_strnew(n)))
		return (NULL);
	ft_strncpy(blank, s, n);
	return (blank);
}
