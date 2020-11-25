/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:36:55 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:37:39 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **res, int j)
{
	int i;

	i = 0;
	while (i < j)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}

static int		ft_strcount(char const *s, char c)
{
	int counter;

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

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		counter;
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	counter = (s) ? ft_strcount(s, c) : 0;
	if (!(res = (char **)malloc((counter + 1) * 8)) || (counter == 0))
		return (0);
	res[counter] = 0;
	while (j < counter)
	{
		len = 0;
		while ((s[i] != '\0') && (s[i] == c))
			i++;
		while ((s[i + len] != '\0') && (s[i + len] != c) && (s[i] != c))
			len++;
		if (!(res[j] = ft_substr(s, i, len)))
			return (ft_free(res, j));
		i = i + len;
		j++;
	}
	return (res);
}
