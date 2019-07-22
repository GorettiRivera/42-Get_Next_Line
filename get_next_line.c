/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <mrivera-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 11:05:17 by mrivera-          #+#    #+#             */
/*   Updated: 2019/07/03 14:03:24 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_nl(char **str, char **line, int fd)
{
	char	*temp;
	int		len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '\0')
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		temp = ft_strdup(str[fd] + len + 1);
		str[fd] = temp;
	}
	else if (str[fd][len] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*string[10240];
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int			rd;

	while ((rd = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[rd] = '\0';
		if (string[fd] == NULL)
			string[fd] = ft_strnew(1);
		temp = ft_strjoin(string[fd], buffer);
		string[fd] = temp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (rd < 0 || fd < 0 || line == NULL)
		return (-1);
	else if (rd == 0 && (string[fd] == NULL || string[fd][0] == '\0'))
		return (0);
	return (ft_nl(string, line, fd));
}
