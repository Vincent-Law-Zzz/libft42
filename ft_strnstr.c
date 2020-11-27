/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:25:07 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/26 00:06:16 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	counter;
	size_t	s2len;

	if ((*s2 == '\0') && !n)
		return ((char *)s1);
	s2len = ft_strlen(s2);
	i = 0;
	counter = 0;
	while (counter < n)
	{
		while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
			i++;
		if (!(s2[i]))
			return ((char *)s1);
		if (s2len > n - counter)
			return (0);
		i = 0;
		s1++;
		counter++;
	}
	return (0);
}
