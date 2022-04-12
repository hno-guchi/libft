#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = 0;
	while (j < n)
	{
		if (*(s2 + j) != '\0')
			*(s1 + i) = *(s2 + j);
		else
			break ;
		j += 1;
		i += 1;
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

char	*ft_strncat(char *s1, const char *s2, size_t n);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str0[30] = "1234567890";
	char	ftstr0[30] = "1234567890";
	char	str1[6] = "abcde";

	printf("\nstr0[30]                    = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);
	printf("\nftstr0[30]                  = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\nstr1[6]                     = %s\n", str1);

	(void)strncat(str0, str1, 3);
	printf("\nstrncat(str0, str1, 3)      = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);

	(void)ft_strncat(ftstr0, str1, 3);
	printf("\nft_strncat(ftstr0, str1, 3) = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\n");

	(void)strncat(str0, str1, 5);
	printf("\nstrncat(str0, str1, 5)      = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);

	(void)ft_strncat(ftstr0, str1, 5);
	printf("\nft_strncat(ftstr0, str1, 5) = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\n");

	(void)strncat(str0, str1, 9);
	printf("\nstrncat(str0, str1, 9)      = ");
	for(int i = 0; i < 30; i++)
		printf("%c", str0[i]);

	(void)ft_strncat(ftstr0, str1, 9);
	printf("\nft_strncat(ftstr0, str1, 9) = ");
	for(int i = 0; i < 30; i++)
		printf("%c", ftstr0[i]);
	printf("\n");

	return (0);
}
