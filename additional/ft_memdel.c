#include <stdlib.h>
void	ft_memdel(void **ap)
{
	if ( ap == NULL || *ap == NULL)
		return ;
	else
	{
		free(*ap);
		ap = NULL;
	}
}

void	ft_memdel(void **ap);

#include <stdio.h>

int	main(void)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * 2);
	*str = (char *)malloc(sizeof(char) * 10);
	// printf("str[0] ~ str[1] | [%p] ~ [%p]\n", &str[0], &str[1]);
	
	ft_memdel(str);
	// if (*str == NULL)
	// 	printf("ft_memdel(str) is success. *str == NULL\n");
	// else
	// 	printf("ft_memdel(str) is false.\n");
	return (0);
}
