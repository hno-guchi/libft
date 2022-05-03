#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char  *s);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char	*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
		while (*(s + i) != '\0')
		{
			*(str + i) = f(*(s + i));
			i += 1;
		}
	return (str);
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
	if (ptr == NULL)
		return ;
	else
		while (i < n)
		{
			*(ptr + i) = '\0';
			i += 1;
		}
}

size_t	ft_strlen(const char  *s)
{
	size_t	len;

	len = 0;
	if (s == NULL)
		return (0);
	else
		while (*(s + len) != '\0')
			len += 1;
	return (len);
}

char	*ft_strmap(char const *s, char (*f)(char));
char	ft_ceasar_cipher(char c);

#include <stdio.h>

int	main(void)
{
	char	str[30] = "Hello, World! I'm Richer. bye";
	char	*ptr;

	printf("\nstr[30] = %s\n", str);
	ptr = ft_strmap(str, ft_ceasar_cipher);
	printf("\nptr = ft_strmap(str, ft_ceasar_cipher);\n");
	printf("\nptr     = %s\n", ptr);
}

char	ft_ceasar_cipher(char c)
{
	if (('A' <= c && c <= 'X') || ('a' <= c && c <= 'x'))
		return (c + 2);
	else if (c == 'Y' || c == 'Z')
		return ('A' + 2 - ('Z' - c));
	else if (c == 'y' || c == 'x')
		return ('a' + 2 - ('z' - c));
	else
		return ('.');

}
