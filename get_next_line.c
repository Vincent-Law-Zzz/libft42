/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:26:30 by aapollo           #+#    #+#             */
/*   Updated: 2021/07/09 00:52:56 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_line(char **line, char **remainder, char *endofstr, int flag)
{
	char		*tmp;

	if (flag > 0)
	{
		tmp = *remainder;
		*endofstr = '\0';
		*line = ft_strdup(*remainder);
		*remainder = ft_strdup((endofstr + 1));
		free(tmp);
		if (!(*remainder) || !(*line))
			return (-1);
		return (1);
	}
	if (flag == 0)
	{
		*line = *remainder;
		if (*line == 0)
			*line = ft_strdup("");
		*remainder = NULL;
		if (*line == 0)
			return (-1);
		return (0);
	}
	return (0);
}

int	ft_read(int *flag, int fd, char *buff, char **remainder)
{
	*flag = read(fd, buff, BUFFER_SIZE);
	if (*flag == -1)
		return (-1);
	(buff)[*flag] = '\0';
	if (*remainder == NULL)
		*remainder = ft_strdup(buff);
	else
		*remainder = ft_strjoin_gnl(*remainder, buff);
	if (!(*remainder))
		return (-1);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*remainder;
	int			flag;
	char		*endofstr;

	if (!line || (fd < 0) || (BUFFER_SIZE <= 0))
		return (-1);
	flag = 1;
	endofstr = ft_strchr(remainder, '\n');
	if ((remainder != NULL) && (endofstr))
		return (ft_get_line(line, &remainder, endofstr, flag));
	while ((endofstr == NULL) && (flag > 0))
	{
		if (ft_read(&flag, fd, buff, &remainder) == -1)
			return (-1);
		endofstr = ft_strchr(remainder, '\n');
		if (endofstr)
			return (ft_get_line(line, &remainder, endofstr, flag));
	}
	return (ft_get_line(line, &remainder, endofstr, flag));
}
