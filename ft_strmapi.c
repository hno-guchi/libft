/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:40:08 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 10:35:51 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	if (f != NULL)
	{
		while (i < len && i < UINT_MAX)
		{
			str[i] = f(i, str[i]);
			i += 1;
		}
	}
	return (str);
}

/*
#include <stdio.h>

char	test_func(unsigned int c, char ch)
{
	(void)c;
	ch = ch + ('a' - 'A');
	return (ch);
}

int	main(void)
{
	char	*str = "ABCDEFG";
	char	*null_p;
	char	*null_p2;
	char	*null_p3;
	char	*null_p4;

	printf("[1]-------------------\n");
	printf("Before [%s]\n", str);
	str = ft_strmapi(str, test_func);
	printf("After  [%s]\n", str);
	printf("   -------------------\n");

	printf("\n[2]-------------------\n");
	printf("Before [%s]\n", "");
	null_p = ft_strmapi("", test_func);
	printf("After  [%s]\n", null_p);
	printf("   -------------------\n");

	printf("\n[3]-------------------\n");
	printf("Before [%s]\n", NULL);
	null_p2 = ft_strmapi(NULL, test_func);
	printf("After  [%s]\n", null_p2);
	printf("   -------------------\n");

	printf("\n[4]-------------------\n");
	printf("Before [%s]\n", str);
	str = ft_strmapi(str, NULL);
	printf("After  [%s]\n", str);
	printf("   -------------------\n");

	printf("\n[5]-------------------\n");
	printf("Before [%s]\n", "");
	null_p3 = ft_strmapi("", NULL);
	printf("After  [%s]\n", null_p3);
	printf("   -------------------\n");

	printf("\n[6]-------------------\n");
	printf("Before [%s]\n", NULL);
	null_p4 = ft_strmapi(NULL, NULL);
	printf("After  [%s]\n", null_p4);
	printf("   -------------------\n");

}
*/
