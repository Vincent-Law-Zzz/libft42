/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:16:22 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 08:06:46 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	int		counter;
	size_t	len;

	res = NULL;
	if (s1 == NULL)
		len = 0;
	else
		len = ft_strlen(s1);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	counter = 0;
	while (s1 && *s1 != '\0')
	{
		res[counter] = *s1;
		s1++;
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
