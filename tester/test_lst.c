/*
 * ft_lstnew()
 */
/*
// ft_lstnew();test == lstdelone();test
#include <stdio.h>
#include <string.h>

void	test_func(void	*p)
{
	(void)p;
}

int	main(void)
{
	// clang -g -fsanitize=leak
	t_list	*node_1   = ft_lstnew("I'm node");
	printf("\n");
	ft_lstdelone(node_1, NULL);
	printf("[1] ft_lstnew(\"I'm node\"); -----\n");
	printf("   content[%s] | next[%p]\n\n",
			(char *)node_1->content, node_1->next);
	ft_lstdelone(node_1, test_func);
	// check [gcc -g -fsanitize=address]
	// printf("content [%s] | next[%p]\n\n",
	// 		(char *)node_1->content, node_1->next);



	t_list	*null_nd  = ft_lstnew(NULL);
	ft_lstdelone(null_nd, NULL);
	printf("[2] ft_lstnew(NULL); ------\n");
	printf("   content[%s]   | next[%p]\n\n",
			(char *)null_nd->content, null_nd->next);
	ft_lstdelone(null_nd, test_func);
	// printf("   content[%s]   | next[%p]\n",
	//		(char *)null_nd->content, null_nd->next);



	t_list	*empty_nd = ft_lstnew("");
	ft_lstdelone(empty_nd, NULL);
	printf("[3] ft_lstnew(\"\"); ------\n");
	printf("   content[%s]         | next[%p]\n\n",
			(char *)empty_nd->content, empty_nd->next);
	printf("\n\n");
	ft_lstdelone(empty_nd, test_func);
	// printf("   content [%s]         | next[%p]\n\n",
	// 		(char *)empty_nd->content, empty_nd->next);

	return (0);
}
*/
/*
 * ft_lstdelone()
 */
/*
#include <stdio.h>
#include <string.h>

void	test_func(void	*p)
{
	(void)p;
}

int	main(void)
{
	// clang -g -fsanitize=leak
	t_list	*node_1   = ft_lstnew("I'm node");
	printf("\n");
	ft_lstdelone(node_1, NULL);
	printf("[1] ft_lstnew(\"I'm node\"); -----\n");
	printf("   content[%s] | next[%p]\n\n",
			(char *)node_1->content, node_1->next);
	ft_lstdelone(node_1, test_func);
	// check [gcc -g -fsanitize=address]
	// printf("content [%s] | next[%p]\n\n",
	// 		(char *)node_1->content, node_1->next);



	t_list	*null_nd  = ft_lstnew(NULL);
	ft_lstdelone(null_nd, NULL);
	printf("[2] ft_lstnew(NULL); ------\n");
	printf("   content[%s]   | next[%p]\n\n",
			(char *)null_nd->content, null_nd->next);
	ft_lstdelone(null_nd, test_func);
	// printf("   content[%s]   | next[%p]\n",
	//		(char *)null_nd->content, null_nd->next);



	t_list	*empty_nd = ft_lstnew("");
	ft_lstdelone(empty_nd, NULL);
	printf("[3] ft_lstnew(\"\"); ------\n");
	printf("   content[%s]         | next[%p]\n\n",
			(char *)empty_nd->content, empty_nd->next);
	printf("\n\n");
	ft_lstdelone(empty_nd, test_func);
	// printf("   content [%s]         | next[%p]\n\n",
	// 		(char *)empty_nd->content, empty_nd->next);

	return (0);
}
*/
/*
 * ft_lstclear()
 */
/*
#include <stdio.h>

void	test_func(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_back(&lst1, nd1);
	ft_lstadd_back(&lst1, ft_lstnew("Two"));
	ft_lstadd_back(&lst1, ft_lstnew(""));
	ft_lstadd_back(&lst1, ft_lstnew(NULL));
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("\n----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");

	printf("nd1->content = [%s]\n", (char *)nd1->content);
	ft_lstclear(&lst1_lead, test_func);
	printf("nd1->content = [%s]\n", (char *)nd1->content);
}
*/

/*
 * ft_lstadd_front()
 */
/*
#include <stdio.h>

void	test_func(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_front(&lst1, nd1);
	ft_lstadd_front(&lst1, ft_lstnew("Two"));
	ft_lstadd_front(&lst1, ft_lstnew(""));
	ft_lstadd_front(&lst1, ft_lstnew(NULL));
	ft_lstadd_front(&lst1, NULL);
	ft_lstadd_front(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");

	i = 0;
	t_list	*lst2 = ft_lstnew("lst2 One");
	printf("ft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1_lead));
	printf("ft_lstsize(lst2); = [%d]\n", ft_lstsize(lst2));
	ft_lstadd_front(&lst2, lst1_lead);
	t_list	*lst2_lead = lst2;
	printf("----- ft_lstadd_front(&lst2, lst1); -----\n");
	while(lst2 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst2->content);
		lst2 = lst2->next;
		i += 1;
	}
	printf("-----   lst2  end   -----\n\n");

	i = 0;
	t_list	*lst3 = ft_lstnew("lst3 One");
	ft_lstadd_front(&lst3, ft_lstnew("lst3 Two"));
	printf("ft_lstsize(lst2); = [%d]\n", ft_lstsize(lst2_lead));
	printf("ft_lstsize(lst3); = [%d]\n", ft_lstsize(lst3));
	ft_lstadd_front(&lst3, lst2_lead);
	t_list	*lst3_lead = lst3;
	printf("----- ft_lstadd_front(&lst3, lst2); -----\n");
	while(lst3 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst3->content);
		lst3 = lst3->next;
		i += 1;
	}
	printf("-----   lst3  end   -----\n\n");

	ft_lstclear(&lst3_lead, test_func);
}
*/

/*
 * ft_lstadd_back()
 */
/*
#include <stdio.h>

void	test_func(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_back(&lst1, nd1);
	ft_lstadd_back(&lst1, ft_lstnew("Two"));
	ft_lstadd_back(&lst1, ft_lstnew(""));
	ft_lstadd_back(&lst1, ft_lstnew(NULL));
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");

	i = 0;
	t_list	*lst2 = ft_lstnew("lst2 One");
	printf("ft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1_lead));
	printf("ft_lstsize(lst2); = [%d]\n", ft_lstsize(lst2));
	ft_lstadd_back(&lst2, lst1_lead);
	t_list	*lst2_lead = lst2;
	printf("----- ft_lstadd_back(&lst2, lst1); -----\n");
	while(lst2 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst2->content);
		lst2 = lst2->next;
		i += 1;
	}
	printf("-----   lst2  end   -----\n\n");

	i = 0;
	t_list	*lst3 = ft_lstnew("lst3 One");
	ft_lstadd_back(&lst3, ft_lstnew("lst3 Two"));
	printf("ft_lstsize(lst2); = [%d]\n", ft_lstsize(lst2_lead));
	printf("ft_lstsize(lst3); = [%d]\n", ft_lstsize(lst3));
	ft_lstadd_back(&lst3, lst2_lead);
	t_list	*lst3_lead = lst3;
	printf("----- ft_lstadd_back(&lst3, lst2); -----\n");
	while(lst3 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst3->content);
		lst3 = lst3->next;
		i += 1;
	}
	printf("-----   lst3  end   -----\n\n");

	ft_lstclear(&lst3_lead, test_func);
}
*/
/*
 * ft_lstsize()
 */
/*
#include <stdio.h>

void	test_func(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_back(&lst1, nd1);
	ft_lstadd_back(&lst1, ft_lstnew("Two"));
	ft_lstadd_back(&lst1, ft_lstnew(""));
	ft_lstadd_back(&lst1, ft_lstnew(NULL));
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("\n----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n");

	ft_lstclear(&lst1_lead, test_func);
}
*/
/*
 * ft_lstlast()
 */
/*
#include <stdio.h>

void	test_func(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_back(&lst1, nd1);
	ft_lstadd_back(&lst1, ft_lstnew("Two"));
	ft_lstadd_back(&lst1, ft_lstnew(""));
	ft_lstadd_back(&lst1, ft_lstnew(NULL));
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("\n----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");
	printf("ft_lstlast(lst1)->content = [%s]\n", ft_lstlast(lst1_lead)->content);
	t_list	*null_p = ft_lstlast(NULL);
	printf("ft_lstlast(NULL) = [%p]\n", null_p);
	ft_lstclear(&lst1_lead, test_func);

	return (0);
}
*/
/*
 * ft_lstiter()
 */
/*
#include <stdio.h>
#include <string.h>

void	test_func(void *p)
{
	// void	*null_p = NULL;
	// p = null_p;
	// p = NULL;
	printf("(test_func)[%p]\n", p);
}

void	test_del(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_lead;

	ft_lstadd_front(&lst1, nd1);
	ft_lstadd_front(&lst1, ft_lstnew("Two"));
	ft_lstadd_front(&lst1, ft_lstnew(""));
	ft_lstadd_front(&lst1, ft_lstnew(NULL));
	ft_lstadd_front(&lst1, NULL);
	ft_lstadd_front(NULL, NULL);
	lst1_lead = lst1;

	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("[Before] ----------\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-------------------\n\n");

	i = 0;
	lst1 = lst1_lead;
	ft_lstiter(lst1, test_func);
	printf("[After] ----------\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-------------------\n\n");
	ft_lstclear(&lst1_lead, test_del);
	return (0);
}
*/
/*
 * ft_lstmap()
 */
/*
#include <stdio.h>

void	*test_f(void *p)
{
	return (p);
}

void	test_del(void *p)
{
	(void)p;
}

int	main(void)
{
	size_t	i = 0;
	t_list	*nd1 = ft_lstnew("One");
	t_list	*lst1;
	t_list	*lst1_head;

	ft_lstadd_back(&lst1, nd1);
	ft_lstadd_back(&lst1, ft_lstnew("Two"));
	ft_lstadd_back(&lst1, ft_lstnew(""));
	ft_lstadd_back(&lst1, ft_lstnew(NULL));
	ft_lstadd_back(&lst1, NULL);
	ft_lstadd_back(NULL, NULL);

	lst1_head = lst1;
	printf("\nft_lstsize(lst1); = [%d]\n", ft_lstsize(lst1));
	printf("----- lst1->content -----\n");
	while(lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)lst1->content);
		lst1 = lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");

	lst1 = lst1_head;
	t_list	*map_lst1 = ft_lstmap(lst1, test_f, test_del);
	t_list	*map_lst1_head = map_lst1;
	printf("ft_lstsize(map_lst1); = [%d]\n", ft_lstsize(map_lst1));
	printf("----- map_lst1->content -----\n");
	while(map_lst1 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)map_lst1->content);
		map_lst1 = map_lst1->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");


	t_list	*map_lst2 = ft_lstmap(lst1, NULL, test_del);
	printf("[2] ft_lstmap(lst1, NULL, test_del);\n");
	printf("   map_lst2 = [%p]\n\n", map_lst2);

	printf("[3] ft_lstmap(lst1, test_f, NULL);\n");
	t_list	*map_lst3 = ft_lstmap(lst1, test_f, NULL);
	t_list	*map_lst3_head = map_lst3;
	printf("   map_lst3 = [%p]\n\n", map_lst3);

	printf("[4] ft_lstmap(lst1, NULL, NULL);\n");
	t_list	*map_lst4 = ft_lstmap(lst1, NULL, NULL);
	printf("   map_lst4 = [%p]\n\n", map_lst4);
	


	printf("[5] ft_lstmap(NULL, test_f, test_del);\n");
	t_list	*map_lst5 = ft_lstmap(NULL, test_f, test_del);
	printf("map_lst5 = [%p]\n\n", map_lst5);

	printf("[6] ft_lstmap(NULL, test_f, NULL);\n");
	t_list	*map_lst6 = ft_lstmap(NULL, test_f, NULL);
	printf("map_lst6 = [%p]\n\n", map_lst6);



	printf("[7] ft_lstmap(NULL, NULL, test_del);\n");
	t_list	*map_lst7 = ft_lstmap(NULL, NULL, test_del);
	printf("map_lst7 = [%p]\n\n", map_lst7);



	printf("[8] ft_lstmap(NULL, NULL, NULL);\n");
	t_list	*map_lst8 = ft_lstmap(NULL, NULL, NULL);
	printf("map_lst8 = [%p]\n\n", map_lst8);

	i = 0;
	printf("ft_lstsize(map_lst3); = [%d]\n", ft_lstsize(map_lst3));
	printf("----- map_lst3->content -----\n");
	while(map_lst3 != NULL)
	{
		printf("[%zu] = [%s]\n", i, (char *)map_lst3->content);
		map_lst3 = map_lst3->next;
		i += 1;
	}
	printf("-----   lst1  end   -----\n\n");

	ft_lstclear(&lst1, test_del);
	ft_lstclear(&map_lst1_head, test_del);
	ft_lstclear(&map_lst3_head, test_del);
	return (0);
}
*/
