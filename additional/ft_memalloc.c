#include <stddef.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	if (m == NULL)
		return (NULL);
	else
		ft_bzero(m, size);
	return (m);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		*(p + i) = 0;
		i += 1;
	}
}

void	*ft_memalloc(size_t size);

#include <stdio.h>

int	main(void)
{
	char	*strc;
	int	*stri;

	strc = ft_memalloc(30);
	stri = ft_memalloc(30);
	printf("char *str;                          int *str;\n");
	for (int i = 0; i < 30; i++)
		printf("[%02d] | [%p] | [%d]       [%02d] | [%p] | [%d]\n", i, &strc[i], (int)strc[i], i, &stri[i], (int)stri[i]);
	free(strc);
	free(stri);
	return (0);
}
