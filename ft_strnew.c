#include <stddef.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while(i < n)
	{
		*(ptr + i) = 0;
		i += 1;
	}
}

char	*ft_strnew(size_t size);

#include <stdio.h>

int	main(void)
{
	char	*p;

	p = ft_strnew(30);
	for (int i = 0; i < 30; i++)
		printf("[%2d]", i);
	printf("\n");
	for (size_t i = 0; i < 30; i++)
		if (*(p + i) == '\0')
			printf("  0 ");
		else
			printf("  %c ", *(p + i));
}
