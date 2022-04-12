#include <stddef.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);

void	ft_strclr(char *s)
{
	size_t	len;

	len  = ft_strlen(s);
	if (!s)
		return ;
	else
		ft_bzero(s, len);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while(i < n)
	{
		*(p + i) = '\0';
		i += 1;
	}
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

void	ft_strclr(char *s);

#include <stdio.h>

int	main(void)
{
	char	str[27] = "abcdefghijklmnopqrstuvwxyz";

	printf("\n---------- Before ----------\n");
	for (int i = 0; i < 26; i++)
		printf("[%p] = %c\n", (str + i), str[i]);
	ft_strclr(str);
	printf("\n---------- After ----------\n");
	for (int i = 0; i < 26; i++)
	{
		if (str[i] == '\0')
			printf("[%p] = \\0\n", (str + i));
		else
			printf("[%p] = %c\n", (str + i), str[i]);
	}
	return (0);
}
