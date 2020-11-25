/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:43:26 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:43:05 by aapollo          ###   ########.fr       */
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
	if (!(res = (char*)malloc(len + 1)))
		return (0);
	while (counter < len)
	{
		res[counter] = (*f)((unsigned int)counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
