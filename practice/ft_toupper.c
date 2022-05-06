int	ft_toupper(int c)
{
	return (('a' <= c && c <= 'z') ? (c - 32) : c);
}

int	ft_toupper(int c);

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
		num = toupper(i);
		printf("return (%3d) | ", num);
		num = ft_toupper(i);
		printf("(%3d)    ", num);

		printf("(%3d); = (%c); ", (i + 40), (char)(i + 40));
		num = toupper(i + 40);
		printf("return (%3d) | ", num);
		num = ft_toupper(i + 40);
		printf("(%3d)    ", num);

		printf("(%3d); = (%c); ", (i + 80), (char)(i + 80));
		num = toupper(i + 80);
		printf("return (%3d) | ", num);
		num = ft_toupper(i + 80);
		printf("(%3d)    ", num);

		if (i < 10)
		{
			if ((i + 120) == 127)			
				printf("(%3d); = ( ); ", (i + 120));
			else
				printf("(%3d); = (%c); ", (i + 120), (char)(i + 120));
			num = toupper(i + 120);
			printf("return (%3d) | ", num);
			num = ft_toupper(i + 120);
			printf("(%3d)    ", num);
		}
		printf("\n");
		if ((i % 10) == 9)
			printf("\n");
	}
	printf(" (%3d); = (%c); ", -1, (char)(-1));
	num = toupper(-1);
	printf("return (%3d) | ", num);
	num = ft_toupper(-1);
	printf("(%3d)    ", num);

	return (0);
}
