/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:45:53 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 20:32:42 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *res;

	res = 0;
	while (*str)
	{
		if (*str == ch)
			res = (char*)str;
		str++;
	}
	if (*str == ch)
		res = (char*)str;
	return (res);
}
