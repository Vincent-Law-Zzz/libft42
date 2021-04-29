/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 12:12:11 by aapollo           #+#    #+#             */
/*   Updated: 2021/04/29 09:59:33 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*p;
	size_t	i;
	size_t	len[2];
	size_t	j;

	j = 0;
	i = 0;
	len[0] = 0;
	if (s1 != NULL)
		len[0] = ft_strlen(s1);
	len[1] = ft_strlen(s2);
	p = (char *)malloc((len[0] + len[1] + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < len[0])
	{
		p[i] = s1[i];
		i++;
	}
	while (j < len[1])
		p[i++] = s2[j++];
	p[i] = '\0';
	free(s1);
	return (p);
}
