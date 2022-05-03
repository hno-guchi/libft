#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*dst_p;
	unsigned char	*src_p;
	unsigned char	uch;

	i = 0;
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	uch = (unsigned char)c;
	while (i < n)
	{
		*(dst_p + i) = *(src_p + i);
		if (*(src_p + i) == uch)
			return (dst + i + 1);
		i += 1;
	}
	return (NULL);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[30] = "12345678901234567890123456789";
	char	src[20] = "copy_zone:not copy.";
	char	ftsrc[20] = "forty_two:not copy.";
	char	*return_p;

	printf("\ndest[30]  = %s [%p] ~ [%p]\n", dest, &dest[0], &dest[29]);
	printf("src[20]   = %s           [%p] ~ [%p]\n", src, &src[0], &src[19]);
	printf("ftsrc[20] = %s         [%p] ~ [%p]\n", ftsrc, &ftsrc[0], &ftsrc[19]);

	return_p = (char *)memccpy(dest, src, ':', 15);
	printf("\nmemccpy(dest, src, ':', 15)");
	printf("\ndest[30] = %s\n", dest);
	if (return_p == NULL)
		printf("return is NULL.\n");
	else
		printf("return_p = %c                             [%p]\n", *return_p, return_p);
	return_p = (char *)ft_memccpy(dest, ftsrc, ':', 15);
	printf("ft_memccpy(dest, ftsrc, ':', 15)");
	printf("\ndest[30] = %s\n", dest);
	if (return_p == NULL)
		printf("return is NULL.\n");
	else
		printf("return_p = %c                             [%p]\n", *return_p, return_p);

	return_p = (char *)memccpy(dest, src, ',', 15);
	printf("\nmemccpy(dest, src, ',', 15)");
	printf("\ndest[30] = %s\n", dest);
	if (return_p == NULL)
		printf("return is NULL.\n");
	else
		printf("return_p = %c                              [%p]\n", *return_p, return_p);
	return_p = (char *)ft_memccpy(dest, ftsrc, ',', 15);
	printf("ft_memccpy(dest, ftsrc, ',', 15)");
	printf("\ndest[30] = %s\n", dest);
	if (return_p == NULL)
		printf("return is NULL.\n");
	else
		printf("return_p = %c                              [%p]\n", *return_p, return_p);

	return (0);
}
