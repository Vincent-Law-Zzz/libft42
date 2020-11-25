/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:40:32 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:40:58 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	fsize;
	size_t	lim;

	lim = ft_strlen(dst);
	fsize = lim + ft_strlen(src);
	if (!dstsize)
		return (fsize - lim);
	if (lim > dstsize)
		fsize = (dstsize + fsize - lim);
	while (*dst != '\0')
		dst++;
	while (lim < dstsize - 1)
	{
		*dst = *src;
		src++;
		dst++;
		lim++;
	}
	*dst = '\0';
	return (fsize);
}
