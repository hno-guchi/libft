#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);
int	ft_check_whitespaces(char const *str, size_t *indexes, size_t end);

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start_end[2];
	char	*ptr;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (ft_check_whitespaces(s, start_end, len))
		len -= (start_end[0] + (len - start_end[1]));
	ptr = ft_strnew(len + 1);
	ptr = ft_strncpy(ptr, s + start_end[0], len);
	return (ptr);
}

int	ft_check_whitespaces(char const *str, size_t *indexes,size_t end)
{
	size_t	len;
	size_t	start;

	end -= 1;
	len = end;
	start = 0;
	while (*(str + start) == ' ' || *(str + start) == '\n' || *(str + start) == '\t')
		start += 1;
	indexes[0] = start;
	while (*(str + end) == ' ' || *(str + end) == '\n' || *(str + end) == '\t')
		end -= 1;
	indexes[1] = end + 1;
	if (start > 0 || end < len)
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while(*(s + len) != '\0')
		len += 1;
	return (len);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
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

char	*ft_strtrim(char const *s);

#include <stdio.h>

int	main(void)
{
	int	i = 0;
	char	test0[20] = " \n\tHello, \n\tbye. \n\t";
	char	test1[20] = "I'm perfect human!!";
	char	*trim0;
	char	*trim1;

	printf("\ntrim0 = ft_strtrim(test0);\n");
	printf("\ntest0[20] = \"\\s\\n\\tHello,\\s\\n\\tbye!\\s\\n\\t\";\n");
	trim0 = ft_strtrim(test0);
	printf("*trim0    = \"");
	while(*(trim0 + i) != '\0')
	{
		if (*(trim0 + i) == ' ')
			printf("\\s");
		else if (*(trim0 + i) == '\n')
			printf("\\n");
		else if (*(trim0 + i) == '\t')
			printf("\\t");
		else
			printf("%c", *(trim0 + i));
		i += 1;
	}
	if (*(trim0 + i) == '\0')
		printf("\\0");
	printf("\"");
	i = 0;
	printf("\n\ntrim1 = ft_strtrim(test1);\n");
	printf("\ntest1[20] = \"I'm\\sperfect\\shuman!!\"\n");
	trim1 = ft_strtrim(test1);
	printf("*trim1    = \"");
	while(*(trim1 + i) != '\0')
	{
		if (*(trim1 + i) == ' ')
			printf("\\s");
		else if (*(trim1 + i) == '\n')
			printf("\\n");
		else if (*(trim1 + i) == '\t')
			printf("\\t");
		else
			printf("%c", *(trim1 + i));
		i += 1;
	}
	if (*(trim1 + i) == '\0')
		printf("\\0");
	printf("\"\n");

	free(trim0);
	free(trim1);

	return (0);
}
