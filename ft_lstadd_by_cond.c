/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_by_cond.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telron <telron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:42:46 by telron            #+#    #+#             */
/*   Updated: 2021/04/26 17:54:28 by telron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_by_cond(t_list **begin, t_list *new, int(*ft_cmp)(void*, void*))
{
	t_list	*now;
	t_list	*last;

	if (!begin || !new)
		return ;
	last = 0;
	now = *begin;
	while (now)
	{
		if (ft_cmp(now->content, new->content) > 0)
			break;
		last = now;
		now = now->next;
	}
	if (last)
		last->next = new;
	else
		*begin = new;
	new->next = now;
}