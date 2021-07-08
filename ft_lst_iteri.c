#include "libft.h"

void	ft_lstiteri(t_list *lst, void (*f)(void *, int))
{
	int	i;

	i = 0;
	if (f)
	{
		while (lst)
		{
			f(lst->content, i);
			lst = lst->next;
			i++;
		}
	}
}
