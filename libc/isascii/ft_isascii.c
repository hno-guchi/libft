int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_isascii(int c);

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	num;

	printf("\n");
	for(int	i = 0; i < 40; i++)
	{
		if ((i % 10) == 0)
		{
			for (int j = 0; j < 3; j ++)
				printf("                            ft_();");
			if (i < 10)
				printf("                            ft_();");
		printf("\n");
		}
		printf(" (%3d); = ", i);
		if (i <= 32)
			printf("( ); ");
		else
			printf("(%c); ", (char)i);
		num = isascii(i);
		printf("return (%d) | ", num);
		num = ft_isascii(i);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 40), (char)(i + 40));
		num = isascii(i + 40);
		printf("return (%d) | ", num);
		num = ft_isascii(i + 40);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 80), (char)(i + 80));
		num = isascii(i + 80);
		printf("return (%d) | ", num);
		num = ft_isascii(i + 80);
		printf("(%d)    ", num);

		if (i < 10)
		{
			if ((i + 120) == 127)			
				printf("(%3d); = ( ); ", (i + 120));
			else
				printf("(%3d); = (%c); ", (i + 120), (char)(i + 120));
			num = isascii(i + 120);
			printf("return (%d) | ", num);
			num = ft_isascii(i + 120);
			printf("(%d)    ", num);
		}
		printf("\n");
		if ((i % 10) == 9)
			printf("\n");
	}
	printf(" (%3d); = ( ); ", -1);
	num = isascii(-1);
	printf("return (%d) | ", num);
	num = ft_isascii(-1);
	printf("(%d)    ", num);

	return (0);
}
