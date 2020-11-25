/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:47:54 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 20:31:18 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void			*res;
	size_t			fullsize;
	unsigned char	*p;

	fullsize = number * size;
	res = malloc(fullsize);
	if (!res)
		return (0);
	p = res;
	while (fullsize > 0)
	{
		*p = 0;
		fullsize--;
		p++;
	}
	return (res);
}
