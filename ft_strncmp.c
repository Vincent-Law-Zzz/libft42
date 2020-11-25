/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:43:22 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 20:20:33 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t counter;

	counter = 0;
	while ((n > 0) && (*s1 != '\0') && (*s2 != '\0'))
	{
		counter = (unsigned char)*s1 - (unsigned char)*s2;
		n--;
		s1++;
		s2++;
		if (counter == 0)
			continue;
		else
			return (counter);
	}
	counter = (unsigned char)*s1 - (unsigned char)*s2;
	if (counter != 0)
		return (counter);
	return (0);
}
