#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	max;

	max = (int)ft_strlen(s);
	if (!s)
		return (NULL);
	while (max > 0)
		if (*(s + max) == c)
			return ((char *)s + max);
		else
			max -= 1;
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

char	*ft_strrchr(const char *s, int c);

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
	printf("\nstr0[30] = %s | [%p] ~ [%p]\n\n", str0, &str0[0], &str0[29]);

	for (int i = 0; i < 30; i++)
		if (str0[i] == '9')
			printf("&str0[%2d]  = %c          [%p]\n", i, str0[i], &str0[i]);
	printf("------------------------------\n");
	c = strrchr(str0, '9');
	printf("strrchr(str0, '9')    = [%p]\n", c);
	c = ft_strrchr(str0, '9');
	printf("ft_strrchr(str0, '9') = [%p]\n\n", c);

	for (int i = 0; i < 30; i++)
		if (str0[i] == '\0')
			printf("&str0[%2d] = \\0           [%p]\n", i, &str0[i]);
	printf("------------------------------\n");
	c = strrchr(str0, '\0');
	printf("strrchr(str0, '\\0')    = [%p]\n", c);
	c = ft_strrchr(str0, '\0');
	printf("ft_strrchr(str0, '\\0') = [%p]\n\n", c);

	printf("The 'a' don't exist.\n");
	printf("------------------------------\n");
	c = strrchr(str0, '\0');
	c = strrchr(str0, 'a');
	printf("strrchr(str0, 'a')     = [%p]\n", c);
	c = ft_strrchr(str0, 'a');
	printf("ft_strrchr(str0, 'a')  = [%p]\n", c);

	printf("\nstr1[30]    = ");
	for (int i = 0; i < 29; i++)
		if (str1[i] == '\0')
			printf("\\0");
		else
			printf("%c", str1[i]);
	printf(" | [%p] ~ [%p]\n\n", &str1[0], &str1[29]);
	for (int i = 0; i < 30; i++)
		if (str1[i] == '\0')
			printf("&str1[%2d]  = \\0           [%p]\n", i, &str1[i]);
	printf("------------------------------\n");
	c = strrchr(str1, '\0');
	printf("strrchr(str1, '\\0')    = [%p]\n", c);
	c = ft_strrchr(str1, '\0');
	printf("ft_strrchr(str1, '\\0') = [%p]\n", c);

	return (0);
}

