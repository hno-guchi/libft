#include <stddef.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new;

	temp = (t_list *)malloc(sizeof(*new));
	new = (t_list *)malloc(sizeof(*new));
	if (temp == NULL || new == NULL)
		return (NULL);
	if (lst == NULL || f == NULL)
		return (NULL);
	temp = f(lst);
	new = temp;
	while (lst->next != NULL)
	{
		lst = lst->next;
		list->next = f(lst);
		if(list->next == NULL)
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
