/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:43:26 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 08:09:58 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	counter;
	char	*res;
	size_t	len;

	counter = 0;
	if (!f || !s)
		return (0);
	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (counter < len)
	{
		res[counter] = (*f)((unsigned int)counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
