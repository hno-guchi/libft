#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnew(size_t size);
size_t	ft_count(char const *s, char c);
void	ft_list(char const *s, char c, size_t *list);
char	**ft_split(size_t cnt, size_t *list, char const *s, char **splits);

char	**ft_strsplit(char const *s, char c)
{
	size_t	cnt;
	size_t	*list;
	char	**sp;

	cnt = ft_count(s, c);
	sp = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (cnt == 0)
		sp[0] = ft_strnew(1);
	else
	{
		list = (size_t *)malloc(sizeof(size_t) * (cnt * 2));
		if (list == NULL)
			return (NULL);
		ft_list(s, c, list);
		sp = ft_split(cnt, list, s, sp);
		if (sp == NULL)
			return (NULL);
		free(list);
	}
	return (sp);
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

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < len)
	{
		if (*(src + i) != '\0')
			*(dst + i) = *(src + i);
		else
			while (i < len)
			{
				*(dst + i) = '\0';
				i += 1;
			}
		i += 1;
	}
	return (dst);
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

size_t	ft_count(char const *s, char c)
{
	size_t	pre;
	size_t	suf;
	size_t	cnt;

	pre = 0;
	suf = 0;
	cnt = 0;
	while (s[pre] != '\0')
	{
		while (s[pre] == c && s[pre] != '\0')
			pre += 1;
		suf = pre + 1;
		while (s[suf] != c && s[suf] != '\0')
			suf += 1;
		if ((suf - pre) > 1)
			cnt += 1;
		pre = suf;
	}
	/*
	while(*(s + pre) != '\0')
	{
		suf = pre + 1;
		while (*(s + suf) != c && *(s + suf) != '\0')
			suf += 1;
		if (*(s + suf) == c)
			if ((suf - pre) > 1)
				cnt += 1;
		pre = suf;
	}
	*/
	return (cnt);
}

void	ft_list(char const *s, char c, size_t  *list)
{
	size_t	i;
	size_t	pre;
	size_t	suf;

	i = 0;
	pre = 0;
	suf = 0;
	while (*(s + pre) != '\0')
	{
		while (s[pre] == c && s[pre] != '\0')
			pre += 1;
		suf = pre + 1;
		while (s[suf] != c && s[suf] != '\0')
			suf += 1;
		if ((suf - pre) > 1)
		{
			list[i++] = pre;
			list[i++] = suf - pre;
		}
		pre = suf;
	} 
}

char	**ft_split(size_t cnt, size_t *list, char const *s, char **splits)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (list == NULL || splits == NULL)
		return (NULL);
	while (i < cnt)
	{
		splits[i] = ft_strnew(list[j + 1] + 1);
		if (splits[i] == NULL)
			return (NULL);
		splits[i] = ft_strncpy(splits[i], (s + list[j]), (list[j + 1]));
		i += 1;
		j += 2;
	}
	splits[i] = ft_strnew(1);
	return (splits);
}

char	**ft_strsplit(char const *s, char c);

#include <stdio.h>

int	main(void)
{
	int	i = -1;
	char	str[7][30] = {
			"*hello*fellow***students*",
			"***",
			"Hello, World!",
			"*Un dwo throw",
			"Once a pon!*",
			"*Touch*Sketch*One touch",
			"Tamago*Kake*Gohan*",
		};
	char	**splits;

	for (int j = 0; j < 7; j++)
	{
		i = -1;
		splits = ft_strsplit(str[j], '*');
		printf("\nstr = %s\n", str[j]);
		while (splits[++i][0] != '\0')
			printf("[%d] = %s\n", i, splits[i]);
		if (splits[i][0] == '\0')
			printf("[%d] = \\0\n", i);
		while (i >= 0)
		{
			free(splits[i]);
			i--;
		}
		printf("\n------------------------------\n");
	}
	free(splits);
	return (0);
}
