#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return(NULL);
	i = (int)ft_strlen(s1);
	j = 0;
	while (*(s2 + j) != '\0')
	{
		*(s1 + i) = *(s2 + j);
		i += 1;
		j += 1;
	}
	*(s1 + i) = '\0';
	return (s1);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while(*(s + len) != '\0')
		len += 1;
	return (len);
}

char	*ft_strcat(char *s1, const char *s2);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[30] = "1234567890";
	char	ftstr0[30] = "1234567890";
	char	str1[10] = "abcdefghi";

	printf("\nstr0[30]                = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);
	printf("\nftstr0[30]              = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\nstr1[30]                = %s\n", str1);

	(void)strcat(str0, str1);
	printf("\nstrcat(str0, str1)      = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);

	(void)ft_strcat(ftstr0, str1);
	printf("\nft_strcat(ftstr0, str1) = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\n");
	return (0);
}
