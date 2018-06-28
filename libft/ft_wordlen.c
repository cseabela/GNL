/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:34:17 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:34:23 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *str, char c)
{
	int		i;
	int		timer2;

	i = 0;
	timer2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		timer2++;
		i++;
	}
	return (timer2);
}
