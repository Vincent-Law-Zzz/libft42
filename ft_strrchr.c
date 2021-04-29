/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:45:53 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 08:12:12 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*res;

	res = NULL;
	while (*str)
	{
		if (*str == ch)
			res = (char *)str;
		str++;
	}
	if (*str == ch)
		res = (char *)str;
	return (res);
}
