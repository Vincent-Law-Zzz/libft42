/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:43:11 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 10:25:24 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_nbrlen(long long nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int			counter;
	long long	num;
	char		*res;

	counter = 0;
	if (n < 0)
		counter++;
	num = n;
	if (num < 0)
		num = -num;
	counter = ft_nbrlen(num);
	res = (char *)malloc((counter + 1) * sizeof(char));
	if (!res)
		return (0);
	res[counter] = '\0';
	while (counter-- > 0)
	{
		res[counter] = (num % 10 + '0');
		num = num / 10;
	}
	if ((res[0] == '0') && (res[1] != '\0'))
		res[0] = '-';
	return (res);
}
