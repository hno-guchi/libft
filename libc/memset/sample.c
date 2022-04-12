#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	ucstr0[30] = "12345678901234567890123456789";
	unsigned char	*pucstr0;
	char		cstr0[30] = "12345678901234567890123456789";
	char		*pcstr0;
	int		istr0[30];
	int		*pistr0;

	printf("\nsizeof(int)         = %2d bytes(%3d bits)\n", (int)sizeof(int), 8 * (int)sizeof(int));
	printf("sizeof(short)       = %2d bytes(%3d bits)\n", (int)sizeof(short), 8 * (int)sizeof(short));
	printf("sizeof(long)        = %2d bytes(%3d bits)\n", (int)sizeof(long), 8 * (int)sizeof(long));
	printf("sizeof(float)       = %2d bytes(%3d bits)\n", (int)sizeof(float), 8 * (int)sizeof(float));
	printf("sizeof(double)      = %2d bytes(%3d bits)\n", (int)sizeof(double), 8 * (int)sizeof(double));
	printf("sizeof(long bouble) = %2d bytes(%3d bits)\n", (int)sizeof(long double), 8 * (int)sizeof(long double));
	printf("sizeof(char)        = %2d bytes(%3d bits)\n", (int)sizeof(char), 8 * (int)sizeof(char));

	printf("\nsizeof(*int)           = %2d bytes(%3d bits)\n", (int)sizeof(pistr0), 8 * (int)sizeof(pistr0));
	printf("sizeof(*char)          = %2d bytes(%3d bits)\n", (int)sizeof(pcstr0), 8 * (int)sizeof(pcstr0));
	printf("sizeof(*unsigned char) = %2d bytes(%3d bits)\n", (int)sizeof(pucstr0), 8 * (int)sizeof(pucstr0));

	printf("\nsizeof(ucstr0[0]) = %d bytes(%2d bits)\n", (int)sizeof(ucstr0[0]), 8 * (int)sizeof(ucstr0[0]));
	printf("sizeof(cstr0[0])  = %d bytes(%2d bits)\n", (int)sizeof(cstr0[0]), 8 * (int)sizeof(cstr0[0]));
	printf("sizeof(istr0[0])  = %d bytes(%2d bits)\n", (int)sizeof(istr0[0]), 8 * (int)sizeof(istr0[0]));
	
	printf("\nucstr0[0] : %p\n", &ucstr0[0]);
	printf("ucstr0[1] : %p\n", &ucstr0[1]);

	printf("\n cstr0[0] : %p\n", &cstr0[0]);
	printf(" cstr0[1] : %p\n", &cstr0[1]);

	printf("\n istr0[0] : %p\n", &istr0[0]);
	printf(" istr0[1] : %p\n", &istr0[1]);
	return (0);
}
