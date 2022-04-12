#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*dst_p;
	char	*src_p;

	i = 0;
	dst_p = (char *)dest;
	src_p = (char *)src;
	while(i < n)
	{
		dst_p[i] = src_p[i];
		i += 1;
	}
	return (dest);
}

t_list	*ft_lstnew(void const *content, size_t content_size);
size_t	ft_strlen(char const *s);

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	str[4][10] = {"Tokyo", "Kanagawa", "Chiba", "\0"};
	int	ins[3] = {INT_MIN, INT_MAX, 0};
	t_list	*list;

	for (int i = 0; i < 4; i++)
	{
		if (str[i][0] == '\0')
			list = ft_lstnew(NULL, ft_strlen(str[i]) + 1);
		else
			list = ft_lstnew(str[i], ft_strlen(str[i]) + 1);
		printf("\nstr[%d]            = %s\n", i, str[i]);
		if (list->content == NULL)
			printf("list->content      = NULL\n");
		else
			printf("list->content      = %s\n", (char *)list->content);
		printf("list->content_size = %d\n", (int)list->content_size);
		if (list->next == NULL)
			printf("list->next         = NULL\n");
		printf("\n------------------------------\n");
		free(list->content);
		free(list);
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		list = ft_lstnew(&ins[i], 4);
		printf("\nint[%d]            = %d\n", i, ins[i]);
		if (list->content == NULL)
			printf("list->content      = NULL\n");
		else
			printf("list->content      = %ls\n", (int *)list->content);
		printf("list->content_size = %d\n",(int)list->content_size);
		if (list->next == NULL)
			printf("list->next         = NULL\n");
		printf("\n------------------------------\n");
		free(list->content);
		free(list);
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
