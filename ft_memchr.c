/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:40:43 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 20:54:39 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *pointer;

	if (*(unsigned char *)s)
	{
		pointer = (unsigned char *)s;
		while ((n > 0) && (pointer))
		{
			if (*pointer == (unsigned char)c)
				return (void *)pointer;
			pointer++;
			n--;
		}
	}
	return (0);
}
