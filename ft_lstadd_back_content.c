#include "libft.h"

t_list *ft_lstadd_back_content(t_list **lst, void *content)
{
	t_list *new;

	if (!lst)
		return NULL;
	if(!(new = ft_lstnew(content)))
		return NULL;
	if (!(*lst))
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
	}
	return new;
}

