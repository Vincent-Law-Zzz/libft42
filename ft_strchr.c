/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:37:59 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 10:06:39 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (s && *s)
	{
		while (i <= ft_strlen(s))
		{
			if (s[i] == c)
				return ((char *)s + i);
			i++;
		}
	}
	return (NULL);
}
