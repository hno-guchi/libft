#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		*(p + i) = '\0';
		i += 1;
	}
}

/*
#include <strings.h>
#include <stdio.h>

int	main()
{
	char	ftcstr0[30] = "12345678901234567890123456789";
	char	cstr0[30] = "12345678901234567890123456789";
	int	ftistr0[30];
	int	istr0[30];


	bzero(cstr0, 10 * sizeof(char));
	ft_bzero(ftcstr0, 10 * sizeof(char));
	printf("\nbzero(cstr0, 10 * sizeof(char))\n");
	printf("bzero = ");
	for (int i = 0; i < 29; i++)
		printf("%c, ", cstr0[i]);
	printf("\nft_   = ");
	for (int i = 0; i < 29; i++)
		printf("%c, ", ftcstr0[i]);
	printf("\n");

	bzero(istr0, 20 * sizeof(int));
	ft_bzero(ftistr0, 20 * sizeof(int));
	printf("\nbzero(istr0, 20 * sizeof(int))\n");
	printf("bzero = ");
	for (int i = 0; i < 29; i++)
		printf("%d, ", istr0[i]);
	printf("\nft_   = ");
	for(int i = 0; i < 29; i++)
		printf("%d, ", ftistr0[i]);
	return (0);
}
*/
