/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:36:55 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 22:44:22 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **res)
{
	size_t i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (NULL);
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
	int		len;
	int		j;

	j = 0;
	counter = (s) ? ft_strcount(s, c) : 0;
	if (!(res = (char **)ft_calloc((counter + 1), sizeof(char*))))
		return (NULL);
	while (j < counter)
	{
		len = 0;
		while ((*s != '\0') && (*s == c))
			s++;
		while ((s[len] != '\0') && (s[len] != c))
			len++;
		if (!(res[j++] = ft_substr(s, 0, len)))
			return (ft_free(res));
		s += len;
	}
	return (res);
}
