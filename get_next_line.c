/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseabela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:30:02 by cseabela          #+#    #+#             */
/*   Updated: 2018/06/28 15:52:25 by cseabela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		end(char *buf)
{
	int i;

	i = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	if (buf[i] == '\n')
		return (1);
	return (0);
}

int		get_line(const int fd, char *buf, char *strs[fd])
{
	int		cs;
	char	*tmp;

	while ((end(buf) != 1) && ((cs = read(fd, buf, BUFF_SIZE)) > 0))
	{
		buf[cs] = '\0';
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	if (cs < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				cs;
	static char		*strs[2147483647];
	char			*buf;
	char			*str;
	char			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buf = ft_strnew(BUFF_SIZE);
	if (!strs[fd])
		strs[fd] = ft_strnew(0);
	if ((cs = get_line(fd, buf, strs)) == -1)
		return (-1);
	if ((str = ft_strchr(strs[fd], '\n')))
	{
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		tmp = strs[fd];
		strs[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
