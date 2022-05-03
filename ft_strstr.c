#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_skip_table(const char *key, int *table, int size_key);

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		size_h;
	int		size_n;
	int		skip[256];
	const char	*p;

	i = 0;
	size_h = (int)ft_strlen(haystack);
	size_n = (int)ft_strlen(needle);
	ft_skip_table(needle, skip, size_n);
	p = haystack + size_n - 1;
	while (p < (haystack + size_h))
	{
		if (*p == needle[size_n - 1])
			if (ft_strncmp(p - size_n + 1, needle, (size_t)size_n) == 0)
				return ((char *)p - size_n + 1);
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

void	ft_skip_table(const char *key, int *table, int size_key)
{
	int	i;
	int	k;

	i = 0;
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

char	*strstr(const char *haystack, const char *needle);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*text = "This is a pen. That is a pencil.";
	char	*p;

	printf("\n*text = %s\n", text);
	printf("------------------------------\n");
	p = strstr(text, "pen");
	printf("strstr(text, \"pen\");    = %s\n", p);
	p = ft_strstr(text, "pen");
	printf("ft_strstr(text, \"pen\"); = %s\n", p);

	return (0);
}
