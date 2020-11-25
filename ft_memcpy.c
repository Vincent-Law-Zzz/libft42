/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:22:41 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 20:25:48 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destenation, const void *source, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = destenation;
	psrc = (unsigned char*)source;
	if ((psrc == 0) && (pdst == 0))
		return (destenation);
	while (n > 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
		n--;
	}
	return (destenation);
}
