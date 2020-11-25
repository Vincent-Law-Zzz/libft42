/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:54:09 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 20:54:12 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*p2dst;
	const unsigned char		*p2src;
	size_t					counter;

	counter = 0;
	p2dst = (unsigned char *)dst;
	p2src = (unsigned char *)src;
	while (counter < n)
	{
		p2dst[counter] = (unsigned char)(p2src[counter]);
		if (p2dst[counter] == ((unsigned char)c))
			return ((void *)(p2dst + counter + 1));
		counter++;
	}
	return (NULL);
}
