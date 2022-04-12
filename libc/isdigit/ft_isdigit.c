int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c);

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
		num = isdigit(i);
		printf("return (%d) | ", num);
		num = ft_isdigit(i);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 40), (char)(i + 40));
		num = isdigit(i + 40);
		printf("return (%d) | ", num);
		num = ft_isdigit(i + 40);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 80), (char)(i + 80));
		num = isdigit(i + 80);
		printf("return (%d) | ", num);
		num = ft_isdigit(i + 80);
		printf("(%d)    ", num);

		if (i < 10)
		{
			if ((i + 120) == 127)			
				printf("(%3d); = ( ); ", (i + 120));
			else
				printf("(%3d); = (%c); ", (i + 120), (char)(i + 120));
			num = isdigit(i + 120);
			printf("return (%d) | ", num);
			num = ft_isdigit(i + 120);
			printf("(%d)    ", num);
		}
		printf("\n");
		if ((i % 10) == 9)
			printf("\n");
	}
	printf("\nisdigit(1000); = [%d]\n", isdigit(1000));
	return (0);
}
