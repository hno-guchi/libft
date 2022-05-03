#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst->next != NULL)
	{
		f(lst);
		lst = (t_list *)lst->next;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
