#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst_p;
	char	*src_p;
	
	dst_p = (char *)dest;
	src_p = (char *)src;
	while (n > 0)
	{
		*dst_p = *src_p;
		dst_p += 1;
		src_p += 1;
		n -= 1;
	}
	return (dest);
}


void	*ft_memcpy(void *dest, const void *src, size_t n);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest0[30] = "12345678901234567890123456789";
	// char	dest0[30] = "1234567890abcdefghi0123456789";
	char	dest1[30] = "12345678901234567890123456789";
	// char	dest1[30] = "1234567890abcdefghi0123456789";
	char	src0[10] = "abcdefghi";
	char	ftsrc0[10] = "forty_two";

	printf("\ndest0[30]  = %s | [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);
	printf("src0[10]   = %s                     | [%p] ~ [%p]\n", src0, &src0[0], &src0[9]);
	printf("ftsrc0[10] = %s                     | [%p] ~ [%p]\n", ftsrc0, &ftsrc0[0], &ftsrc0[9]);
/*
	memcpy(dest0 + 10, dest0, 9);
	printf("%s\n", dest0);
	ft_memcpy(dest1 + 10, dest1, 9);
	printf("%s\n", dest1);
*/	
	memcpy(dest0, src0, 9);
	printf("\nmemcpy(dest0, src0, 9);\n");
	printf("dest0[30] = %s | [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);

	ft_memcpy(dest0, ftsrc0, 9);
	printf("\nft_memcpy(dest0, ftsrc0, 9);\n");
	printf("dest0[30] = %s | [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);

	return (0);
}
