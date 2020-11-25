/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:36:58 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/23 21:39:58 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		counter;

	counter = 0;
	if (!s1)
		return (0);
	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (0);
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 != '\0')
		{
			p[counter] = *s1;
			s1++;
		}
		else
		{
			p[counter] = *s2;
			s2++;
		}
		counter++;
	}
	p[counter] = '\0';
	return (p);
}
