/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:54:56 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 07:56:48 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buff1, const void *buff2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				counter;

	p1 = (unsigned char *)buff1;
	p2 = (unsigned char *)buff2;
	counter = 0;
	while (n > 0)
	{
		counter = *p1 - *p2;
		n--;
		p1++;
		p2++;
		if (counter == 0)
			continue ;
		else
			return (counter);
	}
	return (0);
}
