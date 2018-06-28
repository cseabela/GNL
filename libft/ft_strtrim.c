/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 09:32:20 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/19 09:32:25 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*s_trim;

	if (s == NULL)
		return (NULL);
	while (*s != '\0' && ft_isspace(*s))
		s++;
	len = ft_strlen(s);
	while (len && ft_isspace(s[len - 1]))
		len--;
	s_trim = (char*)malloc(sizeof(char) * (len + 1));
	if (!s_trim)
		return (NULL);
	ft_strncpy(s_trim, s, len);
	s_trim[len] = '\0';
	return (s_trim);
}
