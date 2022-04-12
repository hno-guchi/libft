int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c);

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
		num = isalnum(i);
		printf("return (%d) | ", num);
		num = ft_isalnum(i);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 40), (char)(i + 40));
		num = isalnum(i + 40);
		printf("return (%d) | ", num);
		num = ft_isalnum(i + 40);
		printf("(%d)    ", num);

		printf("(%3d); = (%c); ", (i + 80), (char)(i + 80));
		num = isalnum(i + 80);
		printf("return (%d) | ", num);
		num = ft_isalnum(i + 80);
		printf("(%d)    ", num);

		if (i < 10)
		{
			if ((i + 120) == 127)			
				printf("(%3d); = ( ); ", (i + 120));
			else
				printf("(%3d); = (%c); ", (i + 120), (char)(i + 120));
			num = isalnum(i + 120);
			printf("return (%d) | ", num);
			num = ft_isalnum(i + 120);
			printf("(%d)    ", num);
		}
		printf("\n");
		if ((i % 10) == 9)
			printf("\n");
	}
	return (0);
}
