#include <stddef.h>
#include <stdlib.h>

char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = ft_strnew(len);
	if (sub == NULL)
		return (NULL);
	while (i < len)
	{
		*(sub + i) = *(s + start);
		i += 1;
		start += 1;
	}
	*(sub + i) = '\0';
	return (sub);
}

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
	while (i < n)
	{
		*(ptr + i) = '\0';
		i += 1;
	}
}

char	*ft_strsub(char const *s, unsigned int start, size_t len);

#include <stdio.h>

int	main(void)
{
	int	i;
	char	str[30] = "Hello, World! I'm Micky. bye!";
	char	*sub;

	i = 0;
	sub = ft_strsub(str, 10, 10);
	printf("\n          012345678901234567890123456789\n");
	printf("str[30] = %s\n", str);
	printf("sub     = ft_strsub(str, 10, 10);\n");
	printf("sub     = ");
	while (*(sub + i) != '\0')
		printf("%c", *(sub + i++));
	// printf("sub     = %s\n", sub);

	return (0);
}
