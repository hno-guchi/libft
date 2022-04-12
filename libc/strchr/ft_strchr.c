#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	max;

	i = 0;
	max = (int)ft_strlen(s);
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)s + max);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((char *)s + i);
		i += 1;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (*(s + len) != '\0')
		len += 1;
	return (len);
}

char	*ft_strchr(const char *s, int c);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*c;
	char	str0[30] = "12345678901234567890123456789";
	char	str1[30];

	for(int i = 0; i < 30; i++)
		if (i == 9 || i == 19 || i == 29)
			str1[i] = '\0';
		else
			str1[i] = ((i + 1) % 10) + '0';
	printf("\nstr0[30] = %s | [%p] ~ [%p]\n", str0, &str0[0], &str0[29]);

	printf("\n&str0[8]  = %c           [%p]\n", str0[8], &str0[8]);
	c = strchr(str0, '9');
	printf("strchr(str0, '9')     = [%p]\n", c);
	c = ft_strchr(str0, '9');
	printf("ft_strchr(str0, '9')  = [%p]\n", c);

	printf("\n&str0[29] = \\0          [%p]\n", &str0[29]);
	c = strchr(str0, '\0');
	printf("strchr(str0, '\\0')    = [%p]\n", c);
	c = ft_strchr(str0, '\0');
	printf("ft_strchr(str0, '\\0') = [%p]\n", c);

	printf("\nThe 'a' don't exist.\n");
	c = strchr(str0, 'a');
	printf("strchr(str0, 'a')     = [%p]\n", c);
	c = ft_strchr(str0, 'a');
	printf("ft_strchr(str0, 'a')  = [%p]\n", c);

	printf("\nstr1[30]    = ");
	for (int i = 0; i < 29; i++)
		if (str1[i] == '\0')
			printf("\\0");
		else
			printf("%c", str1[i]);
	printf(" | [%p] ~ [%p]\n\n", &str1[0], &str1[29]);

	for (int i = 0; i < 30; i++)
		if (str1[i] == '\0')
			printf("&str1[%2d]  = \\0         [%p]\n", i, &str1[i]);
	c = strchr(str1, '\0');
	printf("strchr(str1, '\\0')    = [%p]\n", c);
	c = ft_strchr(str1, '\0');
	printf("ft_strchr(str1, '\\0') = [%p]\n", c);

	return (0);
}
