#include <stddef.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while(i < len)
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

char	*ft_strncpy(char *dst, const char *src, size_t len);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest0[30] = "123456789012345678901234567890";
	char	ft_dest0[30] = "123456789012345678901234567890";

	printf("\ndest0[30]                                           = %s                      [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);
	printf("ft_dest0[30]                                        = %s                      [%p] ~ [%p]\n", ft_dest0, &ft_dest0[0], &ft_dest0[29]);

	(void)strncpy(dest0, "abcdefghi", sizeof(dest0));
	(void)ft_strncpy(ft_dest0, "abcdefghi", sizeof(ft_dest0));

	printf("\nstrncpy(dest0, \"abcdefghi\", sizeof(dest0))          = ");
	for (int i = 0; i < 30; i++)
		if (dest0[i] != '\0')
			printf("%c", dest0[i]);
		else
			printf("\\0");
	printf(" [%p] ~ [%p]\n", &dest0[0], &dest0[29]);
	printf("ft_strncpy(ft_dest0, \"abcdefghi\", sizeof(ft_dest0)) = ");
	for (int i = 0; i < 30; i++)
		if (ft_dest0[i] != '\0')
			printf("%c", ft_dest0[i]);
		else
			printf("\\0");
	printf(" [%p] ~ [%p]\n", &ft_dest0[0], &ft_dest0[29]);

	return (0);
}
