/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:13:07 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:13:14 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char start;

	if (s)
	{
		start = '\n';
		while (*s != 0)
		{
			write(1, s, 1);
			s++;
		}
		write(1, &start, 1);
	}
}