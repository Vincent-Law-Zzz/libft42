/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:45:58 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 08:16:09 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (x < len)
	{
		new[x] = s[start + x];
		x++;
	}
	new[len] = '\0';
	return (new);
}
