int	ft_tolower(int c)
{
	return (('A' <= c && c <= 'Z') ? (c + 32) : c);
}

int	ft_tolower(int c);

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
				printf("                               ft_();");
			if (i < 10)
				printf("                               ft_();");
		printf("\n");
		}
		printf(" (%3d); = ", i);
		if (i <= 32)
			printf("( ); ");
		else
			printf("(%c); ", (char)i);
		num = tolower(i);
		printf("return (%3d) | ", num);
		num = ft_tolower(i);
		printf("(%3d)    ", num);

		printf("(%3d); = (%c); ", (i + 40), (char)(i + 40));
		num = tolower(i + 40);
		printf("return (%3d) | ", num);
		num = ft_tolower(i + 40);
		printf("(%3d)    ", num);

		printf("(%3d); = (%c); ", (i + 80), (char)(i + 80));
		num = tolower(i + 80);
		printf("return (%3d) | ", num);
		num = ft_tolower(i + 80);
		printf("(%3d)    ", num);

		if (i < 10)
		{
			if ((i + 120) == 127)			
				printf("(%3d); = ( ); ", (i + 120));
			else
				printf("(%3d); = (%c); ", (i + 120), (char)(i + 120));
			num = tolower(i + 120);
			printf("return (%3d) | ", num);
			num = ft_tolower(i + 120);
			printf("(%3d)    ", num);
		}
		printf("\n");
		if ((i % 10) == 9)
			printf("\n");
	}
	printf(" (%3d); = (%c); ", -1, (char)(-1));
	num = tolower(-1);
	printf("return (%3d) | ", num);
	num = ft_tolower(-1);
	printf("(%3d)    ", num);

	return (0);
}
