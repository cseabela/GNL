/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:26:17 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:26:23 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1alt;
	size_t	i;

	s1alt = s1;
	i = 0;
	while (*s1alt != '\0')
		s1alt++;
	while (i != n && *s2 != '\0')
	{
		*s1alt = *s2;
		s1alt++;
		s2++;
		i++;
	}
	*s1alt = '\0';
	return (s1);
}
