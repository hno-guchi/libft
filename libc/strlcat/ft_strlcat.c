#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dsts;
	size_t	srcs;

	if (!dst || !src)
		return (0);
	dsts = ft_strlen(dst);
	srcs = 0;
	while(((dsts + srcs) < (dstsize - 1)) && (*(src + srcs) != '\0'))
	{
		*(dst + dsts + srcs) = *(src + srcs);
		srcs += 1;
	}
	*(dst + dsts + srcs) = '\0';
	while (*(src + srcs) != '\0')
		srcs += 1;
	return (dsts + srcs);
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	len = 0;
	char	dst0[30] = "1234567890";
	char	ft_dst0[30] = "1234567890";
	char	src0[10] = "++3456789";
	char	src1[30] = "++234567890123456789012345678";

	printf("\ndst0[30]    = %s                    | sizeof(%d)\n", dst0, (int)sizeof(dst0));
	printf("ft_dst0[30] = %s                    | sizeof(%d)\n", ft_dst0, (int)sizeof(ft_dst0));
	printf("src0[10]    = %s                     | sizeof(%d)\n", src0, (int)sizeof(src0));
	printf("src1[30]    = %s | sizeof(%d)\n", src1, (int)sizeof(src1));

	len = strlcat(dst0, src0, sizeof(dst0));
	printf("\nstrlcat(dst0, src0, sizeof(dst0))          = %s           | return(%d)\n", dst0, len);
	len = ft_strlcat(ft_dst0, src0, sizeof(ft_dst0));
	printf("ft_strlcat(ft_dst0, src0, sizeof(ft_dst0)) = %s           | return(%d)\n", ft_dst0, len);

	len = strlcat(dst0, src1, sizeof(dst0));
	printf("\nstrlcat(dst0, src1, sizeof(dst0))          = %s | return(%d)\n", dst0, len);
	len = ft_strlcat(ft_dst0, src1, sizeof(ft_dst0));
	printf("ft_strlcat(ft_dst0, src1, sizeof(ft_dst0)) = %s | return(%d)\n", ft_dst0, len);

	return (0);
}
