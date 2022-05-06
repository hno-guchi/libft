#include <stddef.h>

size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_skip_table(char *key, int *table, int size_key);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	size_h;
	int	size_n;
	int	skip[256];
	char	*p;

	i = 0;
	size_h = (int)ft_strlen(haystack);
	size_n = (int)ft_strlen(needle);
	ft_skip_table((char *)needle, skip, size_n);
	p = (char *)(haystack + size_n - 1);
	while (p < (haystack + len) && p < (haystack + size_h))
	{
		if (*p == needle[size_n - 1])
			if (ft_strncmp(p - size_n + 1, needle, size_n) == 0)
				return (p - size_n + 1);
		i = *p;
		p = p + skip[i];
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < (n - 1))
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
			return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
		if ((*(s1 + i) - *(s2 + i)) != 0)
			return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
		i += 1;
	}
	return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
}

void	ft_skip_table(char *key, int *table, int size_key)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 256)
	{
		table[i] = size_key;
		i += 1;
	}
	i = 0;
	while (i < (size_key - 1))
	{
		k = key[i];
		table[k] = size_key - 1 - i;
		i += 1;
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*text = "This is a pen. That is a pencil.";
	char	*p;

	printf("\n*text = %s\n", text);
	printf("\n---------- len = 13  (This is a pen)\n");
	p = strnstr(text, "pen", 13);
	printf("strnstr(text, \"pen\", 13);    = %s\n", p);
	p = ft_strnstr(text, "pen", 13);
	printf("ft_strnstr(text, \"pen\", 13); = %s\n", p);

	printf("\n---------- len = 12  (This is a pe)\n");
	p = strnstr(text, "pen", 12);
	printf("strnstr(text, \"pen\", 12);    = %s\n", p);
	p = ft_strnstr(text, "pen", 12);
	printf("ft_strnstr(text, \"pen\", 12); = %s\n", p);

	printf("\n---------- len = 1   (T)\n");
	p = strnstr(text, "T", 1);
	printf("strnstr(text, \"T\", 1);       = %s\n", p);
	p = ft_strnstr(text, "T", 1);
	printf("ft_strnstr(text, \"T\", 1);    = %s\n", p);

	printf("\n---------- len = 1   (T)\n");
	p = strnstr(text, "Th", 1);
	printf("strnstr(text, \"Th\", 1);      = %s\n", p);
	p = ft_strnstr(text, "Th", 1);
	printf("ft_strnstr(text, \"Th\", 1);   = %s\n", p);

	printf("\n---------- len = 100 (This is a pen. That is a pencil. ///)\n");
	p = strnstr(text, "a", 100);
	printf("strnstr(text, \"a\", 100);     = %s\n", p);
	p = ft_strnstr(text, "a", 100);
	printf("ft_strnstr(text, \"a\", 100);  = %s\n", p);

	printf("\n---------- len = 100 (This is a pen. That is a pencil. ///)\n");
	p = strnstr(text, "-", 100);
	printf("strnstr(text, \"-\", 100);     = %s\n", p);
	p = ft_strnstr(text, "-", 100);
	printf("ft_strnstr(text, \"-\", 100);  = %s\n", p);

	return (0);
}
