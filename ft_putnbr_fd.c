/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:47:31 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:27:58 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long numcp;

	numcp = n;
	if (numcp < 0)
	{
		write(fd, "-", 1);
		numcp = -numcp;
	}
	if (numcp > 0)
	{
		ft_putnbr_fd(numcp / 10, fd);
		ft_putchar_fd(numcp % 10 + 48, fd);
	}
	if (numcp < 0)
		write(fd, "-", 1);
	return ;
}
