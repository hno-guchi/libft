#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((*(s1_p + i) - *(s2_p + i)) != 0)
			return ((int)(*(s1_p + i) - *(s2_p + i)));
		i += 1;
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	diff = 0;
	int	ft_diff = 0;
	char	str0[27] = "abcdefghijklmnopqrstuvwxyz";
	char	str1[10] = "abcdefghi";
	char	str2[10] = "abcde@ghi";

	printf("\nstr0[27] = %s\n", str0);
	printf("str1[10] = %s\n", str1);
	printf("str2[10] = %s\n", str2);

	diff = memcmp(str0, str1, 9);
	printf("\nmemcmp(str0, str1, 9);     = %d\n", diff);
	diff = memcmp(str0, str1, 10);
	printf("memcmp(str0, str1, 10);    = %d\n", diff);
	diff = memcmp(str0, str2, 10);
	printf("memcmp(str0, str2, 10);    = %d\n", diff);

	ft_diff = ft_memcmp(str0, str1, 9);
	printf("\nft_memcmp(str0, str1, 9);  = %d\n", ft_diff);
	ft_diff = ft_memcmp(str0, str1, 10);
	printf("ft_memcmp(str0, str1, 10); = %d\n", ft_diff);
	ft_diff = ft_memcmp(str0, str2, 10);
	printf("ft_memcmp(str0, str2, 10); = %d\n", ft_diff);

	return (0);
}
