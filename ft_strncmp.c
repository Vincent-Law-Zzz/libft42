/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:43:22 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 08:11:35 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	counter;

	while (n-- && (*s1 || *s2))
	{
		counter = (unsigned char)*s1++ - (unsigned char)*s2++;
		if (counter)
			return (counter);
	}
	return (0);
}
