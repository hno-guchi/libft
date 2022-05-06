#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	int	i;

	i = 0;
	while (alst[i]->next != NULL)
	{
		ft_lstdelone(&(alst[i]), del);
		i += 1;
	}
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	alst = NULL;
}

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
