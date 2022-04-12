#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	uc;
	unsigned char	*s_p;

	i = 0;
	uc = (unsigned char)c;
	s_p = (unsigned char *)s;
	while (i < n)
	{
		if (*(s_p + i) == uc)
			return (s_p + i);
		i += 1;
	}
	return (NULL);
}

void	*ft_memchr(const void *s, int c, size_t n);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*sp;
	char	*ftsp;
	char	str0[27] = "abcdefghijklmnopqrstuvwxyz";	
	char	ftstr0[27] = "abcdefghijklmnopqrstuvwxyz";

	printf("\nstr0[27] = %s\n", str0);
	sp = memchr(str0, 'm', 27);
	printf("sp = memchr(str0, 'm', 27)\n");
	printf("*sp      = %c [%p]\n", *sp, sp);
	printf("str0[%d] = %c [%p]\n", (int)(sp - str0), str0[sp - str0], &str0[sp - str0]);

	printf("\nftstr0[27] = %s\n", ftstr0);
	ftsp = ft_memchr(ftstr0, 'm', 27);
	printf("ftsp = ft_memchr(ftstr0, 'm', 27)\n");
	printf("*ftsp      = %c [%p]\n", *ftsp, ftsp);
	printf("ftstr0[%d] = %c [%p]\n", (int)(ftsp - ftstr0), ftstr0[ftsp - ftstr0], &ftstr0[ftsp - ftstr0]);

	return (0);
}
