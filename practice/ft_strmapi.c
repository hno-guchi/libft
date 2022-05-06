#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
		while (*(s + i) != '\0')
		{
			*(str + i) = f(i, *(s + i));
			i += 1;
		}
	return (str);
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
	if (s == NULL)
		return ;
	while(i < n)
	{
		*(temp + i) = '\0';
		i += 1;
	}
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_ceasar_cipher(unsigned int i, char c);

#include <stdio.h>

int	main(void)
{
	char	str[30] = "Hello, World! I'm Richer. bye";
	char	*ptr;

	printf("\nstr[30] = %s\n", str);
	ptr = ft_strmapi(str, ft_ceasar_cipher);
	printf("\nptr = ft_strmap(str, ft_ceasar_cipher);\n");
	printf("\nptr     = %s\n", ptr);
}

char	ft_ceasar_cipher(unsigned int i, char c)
{
	if (((i + 1) % 2) == 0)
		return ('*');
	if (('A' <= c && c <= 'X') || ('a' <= c && c <= 'x'))
		return (c + 2);
	else if (c == 'Y' || c == 'Z')
		return ('A' + 2 - ('Z' - c));
	else if (c == 'y' || c == 'z')
		return ('a' + 2 - ('z' - c));
	else
		return('.');
}
