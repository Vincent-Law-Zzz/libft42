/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:32:05 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/27 14:15:06 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while ((s1[start] != '\0') && ft_strchr((char *)set, s1[start]))
		start++;
	while ((start <= end) && ft_strchr((char *)set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
