#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p += 1;
		n -= 1;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	ftcstr0[30] = "12345678901234567890123456789";
	char	cstr0[30] = "12345678901234567890123456789";
	int	ftistr0[30];
	int	istr0[30];
	int	ftistr1[30];
	int	istr1[30];
	int	ftistr2[30];
	int	istr2[30];



	memset(cstr0, 97, 10 * sizeof(char));
	printf("\nmemset(cstr0, 97, 10 * sizeof(char))\n");
	printf("  cstr0[30] = %s\n", cstr0);

	ft_memset(ftcstr0, 97, 10 * sizeof(char));
	printf("ft_memset(ftcstr0, 97, 10 * sizeof(char))\n");
	printf("ftcstr0[30] = %s\n", ftcstr0);
	printf("10 * sizeof(char) = %ld\n", 10 * sizeof(char));



	memset(istr0, 0, 20 * sizeof(int));
	printf("\nmemset(istr0, 0, 20 * sizeof(int))\n");
	printf("  istr0[30] = ");
	for (int i = 0; i < 30; i++)
		printf("%d ", istr0[i]);

	ft_memset(ftistr0, 0, 20 * sizeof(int));
	printf("\nft_memset(ftistr0, 0, 20 * sizeof(int))\n");
	printf("ftistr0[30] = ");
	for(int i = 0; i < 30; i++)
		printf("%d ", ftistr0[i]);
	printf("\n10 * sizeof(int) = %ld\n", 10 * sizeof(int));



	memset(istr1, 1, 20 * sizeof(int));
	printf("\nmemset(istr1, 1, 20 * sizeof(int))\n");
	printf("  istr1[30] = ");
	for (int i = 0; i < 30; i++)
		printf("%d ", istr1[i]);

	ft_memset(ftistr1, 1, 20 * sizeof(int));
	printf("\nft_memset(ftistr1, 1, 20 * sizeof(int))\n");
	printf("ftistr1[30] = ");
	for(int i = 0; i < 30; i++)
		printf("%d ", ftistr1[i]);
	printf("\n20 * sizeof(int) = %ld\n", 20 * sizeof(int));
	


	memset(istr2, -1, 20 * sizeof(int));
	printf("\nmemset(istr2, -1, 20 * sizeof(int))\n");
	printf("  istr2[30] = ");
	for(int i = 0; i < 30; i++)
		printf("%d ", istr2[i]);

	ft_memset(ftistr2, -1, 20 * sizeof(int));
	printf("\nft_memset(ftistr2, -1, 20 * sizeof(int))\n");
	printf("ftistr2[30] = ");
	for(int i = 0; i < 30; i++)
		printf("%d ", ftistr2[i]);
	printf("\n20 * sizeof(int) = %ld\n", 20 * sizeof(int));
	return (0);
}
*/
