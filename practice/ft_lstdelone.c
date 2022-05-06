#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	alst = NULL;
}

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

#include <stdio.h>
#include <limits.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
t_list	*ft_lstnew(void const *content, size_t content_size);
size_t	ft_strlen(char const *s);
void	ft_delete(void *s, size_t n);


int	main(void)
{
	char	str[4][10] = {"Tokyo", "Kanagawa", "Chiba", "\0"};
	int	ins[3] = {INT_MIN, INT_MAX, 0};

	for (int i = 0; i < 4; i++)
	{
		t_list	**list = (t_list **)malloc(sizeof(**list));
		if (str[i][0] == '\0')
			list[0] = ft_lstnew(NULL, ft_strlen(str[i]) + 1);
		else
			list[0] = ft_lstnew(str[i], ft_strlen(str[i]) + 1);
		printf("\nstr[%d]               = %s\n", i, str[i]);
		if (list[0]->content == NULL)
			printf("list[0]->content      = NULL\n");
		else
			printf("list[0]->content      = %s\n", (char *)list[0]->content);
		printf("list[0]->content_size = %d\n", (int)list[0]->content_size);
		if (list[0]->next == NULL)
			printf("list[0]->next         = NULL\n");
		printf("\nft_lstdelone(lst, ft_delete);---> ");
		ft_lstdelone(list, ft_delete);
		if (list == NULL)
			printf("Success list | [%p];\n", list);
		else
			printf("Failed list | [%p];\n", list);
		printf("\n------------------------------\n");

	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		t_list	**list = (t_list **)malloc(sizeof(**list));
		list[0] = ft_lstnew(&ins[i], 4);
		printf("\nint[%d]            = %d\n", i, ins[i]);
		if (list[0]->content == NULL)
			printf("list[0]->content      = NULL\n");
		else
			printf("list[0]->content      = %ls\n", (int *)list[0]->content);
		printf("list[0]->content_size = %d\n",(int)list[0]->content_size);
		if (list[0]->next == NULL)
			printf("list[0]->next         = NULL\n");
		printf("\nft_lstdelone(lst, ft_delete);---> ");
		ft_lstdelone(list, ft_delete);
		if (list == NULL)
			printf("Success free(list);\n");
		printf("\n------------------------------\n");
	}
}

size_t	ft_strlen(char const *s)
{
	size_t	len;

	len = 0;
	while(s[len] != '\0')
		len += 1;
	return (len);
}


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dst_p;
	char	*src_p;

	i = 0;
	dst_p = (char *)dest;
	src_p = (char *)src;
	while (i < n)
	{
		dst_p[i] = src_p[i];
		i += 1;
	}
	return (dest);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		(void)ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

void	ft_delete(void *s, size_t n)
{
	if (s)
		free(s);
	if (n)
		n = 0;
}
