#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strcpy(char *dst, const char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*ptr;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	ptr = ft_strnew(size_s1 + size_s2 - 1);
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	(void)ft_strcpy(ptr, s1);
	(void)ft_strcpy((ptr + size_s1), s2);
	return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s == NULL)
		return (0);
	while (*(s + len) != '\0')
		len += 1;
	return (len);
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
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		*(temp + i) = '\0';
		i += 1;
	}
}


char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i += 1;
	}
	*(dst + i) = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2);

#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char	str0[10] = "Hello, Wo";
	char	str1[20] = "rld! I'm Ricky. Bye";
	char	*ptr;

	ptr = ft_strjoin(str0, str1);
	printf("\nstr0[10] = %s\n", str0);
	printf("str1[20] = %s\n", str1);
	printf("\nptr      = ft_strjoin(str0, str1);\n");
	printf("ptr      = ");
	while (*(ptr + i) != '\0')
		printf("%c", *(ptr + i++));
	if (*(ptr + i) == '\0')
		printf("\\0\n");
	return (0);
}
