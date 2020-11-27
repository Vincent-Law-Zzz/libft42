/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 20:43:11 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/26 00:13:10 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			counter;
	long long	num[2];
	char		*res;

	counter = 0;
	if (n < 0)
		counter++;
	num[0] = n;
	num[1] = n;
	num[0] = (n < 0) ? -num[0] : num[0];
	num[1] = (n < 0) ? -num[1] : num[1];
	while (num[0] /= 10)
		counter++;
	counter++;
	if (!(res = (char*)malloc((counter + 1) * sizeof(char))))
		return (0);
	res[counter] = '\0';
	while (counter-- > 0)
	{
		res[counter] = (num[1] % 10 + '0');
		num[1] = num[1] / 10;
	}
	res[0] = ((res[0] == '0') && (res[1] != '\0')) ? ('-') : (res[0] + 0);
	return (res);
}
