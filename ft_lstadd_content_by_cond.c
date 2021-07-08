#include "libft.h"

t_list	*ft_lstadd_content_by_cond(t_list **begin, void *content, \
	int(*ft_cmp)(void *, void *))
{
	t_list	*list;

	list = ft_lstnew(content);
	if (list)
		ft_lstadd_by_cond(begin, list, ft_cmp);
	else
		return (NULL);
	return (list);
}
