/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 20:26:54 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/26 00:13:21 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	max;
	int			isneg;
	long long	res;

	res = 0;
	isneg = 1;
	max = 0;
	while (((*str >= 9) && (*str <= 13)) || (*str == 32))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*str++ == '-')
			isneg = -1;
	while ((*str >= '0') && (*str <= '9'))
	{
		res = res * 10 + (*str - '0');
		str++;
		if ((max > res) && (isneg == 1))
			return (-1);
		if ((max > res) && (isneg == -1))
			return (0);
		max = res;
	}
	return (res * isneg);
}
