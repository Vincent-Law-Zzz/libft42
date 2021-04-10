/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:26:30 by aapollo           #+#    #+#             */
/*   Updated: 2021/03/19 12:13:51 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_line(char **line, char **remainder, char *endofstr, int flag)
{
	char	*tmp;

	if (flag < 0)
		return (-1);
	if (flag > 0)
	{
		tmp = *remainder;
		*endofstr = '\0';
		if (!(*line = ft_strdup(*remainder)))
			return (-1);
		if (!(*remainder = ft_strdup((endofstr + 1))))
			return (-1);
		free(tmp);
		return (1);
	}
	if (flag == 0)
	{
		if (!(*line = ft_strdup(*remainder)))
			return (-1);
		free(*remainder);
		*remainder = NULL;
		return (0);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	char		buff[BUFFER_SIZE + 1];
	static char	*remainder;
	int			flag;
	char		*endofstr;

	if (!line || (fd < 0) || (BUFFER_SIZE <= 0))
		return (-1);
	flag = 1;
	endofstr = NULL;
	if ((remainder != NULL) && (endofstr = ft_strchr(remainder, '\n')))
		return (ft_get_line(line, &remainder, endofstr, flag));
	while ((endofstr == NULL) && (flag = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[flag] = '\0';
		if (!(remainder = (remainder == NULL) ? ft_strdup(buff) :
			ft_strjoin_gnl(remainder, buff)))
			return (-1);
		if ((endofstr = ft_strchr(remainder, '\n')))
			return (ft_get_line(line, &remainder, endofstr, flag));
	}
	return (ft_get_line(line, &remainder, endofstr, flag));
}
