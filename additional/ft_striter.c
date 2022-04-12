#include <stddef.h>

void	ft_striter(char *s, void(*f)(char *))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
		while(*(s + i) != '\0')
		{
			f(s + i);
			i += 1;
		}
}



void	ft_strclr(char *s);
void	ft_striter(char *s, void(*f)(char *));

#include <stdio.h>

int	main(void)
{
	char	str[27] = "abcdefghijklmnopqrstuvwxyz";

	printf("\n---------- Before ----------\n");
	for (int i = 0; i < 26; i++)
		printf("[%p] = %c\n", (str + i), str[i]);
	ft_striter(str, ft_strclr);
	printf("\n---------- After ----------\n");
	for (int i = 0; i < 26; i++)
	{
		if (str[i] == '\0')
			printf("[%p] = \\0\n", (str + i));
		else
			printf("[%p] = %c\n", (str + i), str[i]);
	}
	return (0);

}

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		*(s + i) = '\0';
		i += 1;
	}
}
