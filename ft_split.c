/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:36:55 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 09:36:03 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static int	ft_strcount(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if ((*s != c) && (*s != '\0'))
			counter++;
		while ((*s != c) && (*s != '\0'))
			s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		counter;
	int		len;
	int		j;

	j = 0;
	counter = 0;
	if (s)
		counter = ft_strcount(s, c);
	res = (char **)ft_calloc((counter + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (j < counter)
	{
		len = 0;
		while ((*s != '\0') && (*s == c))
			s++;
		while ((s[len] != '\0') && (s[len] != c))
			len++;
		res[j++] = ft_substr(s, 0, len);
		if (!res[j - 1])
			return (ft_free(res));
		s += len;
	}
	return (res);
}
