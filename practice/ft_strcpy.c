char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i += 1;
	}
	*(dst + i) = '\0';
	return (dst);
}

char	*ft_strcpy(char *dst, const char *src);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest0[30] = "12345678901234567890123456789";
	char	ft_dest0[30] = "12345678901234567890123456789";

	printf("\ndest0[30]                        = %s [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);
	printf("ft_dest0[30]                     = %s [%p] ~ [%p]\n", ft_dest0, &ft_dest0[0], &ft_dest0[29]);

	(void)strcpy(dest0, "abcdefghi");
	(void)ft_strcpy(ft_dest0, "abcdefghi");

	printf("\nstrcpy(dest0, \"abcdefghi\")       = ");
	for (int i = 0; i < 30; i++)
		printf("%c", dest0[i]);
	printf(" [%p] ~ [%p]\n", &dest0[0], &dest0[29]);

	printf("ft_strcpy(ft_dest0, \"abcdefghi\") = ");
	for (int i = 0; i < 30; i++)
		printf("%c", ft_dest0[i]);
	printf(" [%p] ~ [%p]\n", &ft_dest0[0], &ft_dest0[29]);

	return (0);
}
