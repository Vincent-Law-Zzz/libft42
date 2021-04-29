/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:47:31 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 07:58:41 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	numcp;

	numcp = n;
	if (numcp < 0)
	{
		write(fd, "-", 1);
		numcp = -numcp;
	}
	if (numcp == 0)
		ft_putchar_fd('0', fd);
	else if (numcp > 0)
	{
		if (numcp / 10 != 0)
			ft_putnbr_fd(numcp / 10, fd);
		ft_putchar_fd(numcp % 10 + 48, fd);
	}
	return ;
}
