#include <stdlib.h>
#include <stddef.h>

void	ft_strdel(char **as)
{
	if (as == NULL || *as == NULL)
		return ;
	else
	{
		free(*as);
		*as = NULL;
	}
}

void	ft_strdel(char **as);

#include <stdio.h>

int	main(void)
{
	char	**pptr;

	pptr = (char **)malloc(sizeof(char *) * 3);
	*pptr = (char *)malloc(sizeof(char) * 10);
	printf("\npptr[0]:[%p]\npptr[1]:[%p]\n\n", pptr, (pptr + 1));
	printf("\npptr[0][0] ~ pptr[0][9]\n");
	for (int i = 0; i < 10; i++)
	{
		*(*pptr + i) = i + '0';
		printf("[%p] -> %c\n", (*pptr + i), *(*pptr + i));
	}
	ft_strdel(pptr);
	if (*pptr == NULL)
		printf("\nft_strdel(pptr);\n -> *pptr is NULL. *pptr = [%p]\n", *pptr);
	else
		printf("\nft_strdel(pptr);\n -> *pptr is not NULL. *pptr = [%p]\n", *pptr);
	return (0);
}
