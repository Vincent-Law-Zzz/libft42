/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapollo <aapollo@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 02:43:13 by aapollo           #+#    #+#             */
/*   Updated: 2020/11/25 02:56:17 by aapollo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *p;
	t_list *res;

	res = 0;
	if (f)
		while (lst)
		{
			p = ft_lstnew(f(lst->content));
			if (p == NULL)
			{
				ft_lstclear(&res, del);
				return (0);
			}
			ft_lstadd_back(&res, p);
			lst = lst->next;
		}
	return (res);
}
