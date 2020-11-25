/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:41:21 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:41:33 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t j;
	size_t counter;

	if (!src)
		return (0);
	j = ft_strlen(src);
	counter = 0;
	while (src[counter] && (counter < (dstsize - 1)) && dstsize)
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize)
		dst[counter] = '\0';
	return (j);
}
