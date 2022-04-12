#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_p;
	char	*src_p;

	i = 0;
	dst_p = (char *)dst;
	src_p = (char *)src;
	if (src_p < dst_p)
		while ((int)len > 0)
		{
			len -= 1;
			*(dst_p + len) = *(src_p + len);
		}
	else
		while (i < len)
		{	
			*(dst_p + i) = *(src_p + i);
			i += 1;
		}
	return(dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest0[30] = "1234567890abcdefghijklmno....";
	char	ftdest0[30] = "1234567890abcdefghijklmno....";

	printf("\ndest0[30]   = %s [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);
	printf("memmove(dest0 + 10, dest0, 15)\n");
	memmove(dest0 + 10, dest0, 15);
	printf("dest0[30]   = %s [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[29]);

	printf("\nftdest0[30] = %s [%p] ~ [%p]\n", ftdest0, &ftdest0[0], &ftdest0[29]);
	printf("ft_memmove(ftdest0 + 10, ftdest0, 15)\n");
	ft_memmove(ftdest0 + 10, ftdest0, 15);
	printf("ftdest0[30] = %s [%p] ~ [%p]\n", ftdest0, &ftdest0[0], &ftdest0[29]);
	return (0);
}
