/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:45:58 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 03:12:23 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			slen;
	unsigned int	counter;

	slen = (s) ? (ft_strlen(s)) : 0;
	counter = 0;
	p = ((start + len <= slen)) ? (char *)malloc((len + 1)) : 0;
	if ((p == 0) && !(p = ((start < slen) && (slen > 0) && (p == 0)) ?
		((char *)malloc((slen - start + 1))) : (char *)malloc(sizeof(char))))
		return (0);
	while ((counter++ < start) && (*s != '\0'))
		s++;
	counter = 0;
	while ((counter < len) && (start <= slen) && (slen) && (len) && (*s))
	{
		p[counter] = *s;
		counter++;
		s++;
	}
	p[counter] = '\0';
	return (p);
}
