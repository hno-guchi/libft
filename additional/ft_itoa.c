#include <stddef.h>
#include <stdlib.h>

char	*ft_strnew(size_t n);
void	ft_bzero(void *s, size_t n);
size_t	ft_digitscount(long int ln);
size_t	ft_digitscount(long int ln)
{
	size_t	digits;

	digits = 1;
	if (ln < 0)
		ln *= -1;
	while (ln > 9)
	{
		ln /= 10;
		digits += 1;
	}
	return (digits);
}

char	*ft_strcreate(long int ln, size_t d);
char	*ft_strcreate(long int ln, size_t d)
{
	size_t	negative;
	char	*ptr;

	negative = 0;
	if (ln < 0)
	{
		negative = 1;
		ln *= -1;
	}
	ptr = ft_strnew(negative + d + 1);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	*ft_itoa(int n)
{
	long int	num;
	size_t		negative;
	size_t		digits;
	char		*ptr;

	num = (long int)n;
	negative = 0;
	digits = ft_digitscount(num);
	ptr = ft_strcreate(num, digits);
	if (ptr == NULL)
		return (NULL);
	if (num < 0)
	{
		negative = 1;
		num *= -1;
	}
	if (negative)
		ptr[0] = '-';
	while(digits > 0)
	{
		digits -= 1;
		ptr[negative + digits] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
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
		ptr[i] = '\0';
		i += 1;
	}
}

char	*ft_itoa(int n);

#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	i = 0;
	int	j = 0;
	int	list[5] = {INT_MIN, INT_MAX, 0, -1, 1};
	char	*str;

	for (i = 0; i < 5; i++)
	{
		str = ft_itoa(list[i]);

		printf("\nstr = ft_itoa(%11d);\n", list[i]);
		printf("str = ");
		if (str == NULL)
			printf("NULL");
		else
		{
			for (j = 0; str[j] != '\0'; j++)
				printf("%c", str[j]);
			if (str[j] == '\0')
				printf("\\0");
		}
		printf("\n");
	}
	return (0);
}
