/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:23:42 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:24:29 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p2dst;
	char	*p2src;
	size_t	counter;

	if (!src && !dst)
		return (dst);
	counter = len;
	p2dst = (char *)dst;
	p2src = (char *)src;
	if (dst > src)
		while (counter--)
			p2dst[counter] = p2src[counter];
	else
	{
		counter = 0;
		while (counter < len)
		{
			p2dst[counter] = p2src[counter];
			counter++;
		}
	}
	return (dst);
}
