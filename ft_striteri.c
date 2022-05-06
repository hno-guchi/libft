/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:52:07 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 11:02:04 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len && i < UINT_MAX)
	{
		f(i, &s[i]);
		i += 1;
	}
	return ;
}

/*
#include <stdio.h>
#include <string.h>

void	test_fnc(unsigned int i, char *s)
{
	(void)i;
	*s = *s + ('a' - 'A');
	return ;
}

int	main(void)
{
	char	str[10] = "ABCDEFGHI";
	printf("\n[1] ft_striteri(%s, test_fnc);-----\n",str);
	printf("Before [%s]\n", str);
	ft_striteri(str, test_fnc);
	printf("After  [%s]\n", str);

	char	str1[10] = "ABCDEFGHI";
	printf("\n[2] ft_striteri(%s, NULL);-----\n", str1);
	printf("Before [%s]\n", str1);
	ft_striteri(str1, NULL);
	printf("After  [%s]\n", str1);

	char	str2[10] = "";
	printf("\n[3] ft_striteri(%s, test_fnc);-----\n", str2);
	printf("Before [%s]\n", str2);
	ft_striteri(str2, test_fnc);
	printf("After  [%s]\n", str2);

	char	str3[10] = "";
	printf("\n[4] ft_striteri(%s, NULL);-----\n", str3);
	printf("Before [%s]\n", str3);
	ft_striteri(str3, NULL);
	printf("After  [%s]\n", str3);

	char	*str4 = NULL;
	printf("\n[5] ft_striteri(%s, test_fnc);-----\n", str4);
	printf("Before [%s]\n", str4);
	ft_striteri(str4, test_fnc);
	printf("After  [%s]\n", str4);

	char	*str5 = NULL;
	printf("\n[6] ft_striteri(%s, NULL);-----\n", str5);
	printf("Before [%s]\n", str5);
	ft_striteri(str5, NULL);
	printf("After  [%s]\n", str5);

	return (0);
}
*/
