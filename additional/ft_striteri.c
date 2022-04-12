#include <stddef.h>

void	ft_striteri(char *s, void  (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
		while (*(s + i) != '\0')
		{
			f(i, (s + i));
			i += 1;
		}
}

void	ft_striteri(char *s, void  (*f)(unsigned int, char *));
void	ft_putnstr(unsigned int n, char *str);

#include <unistd.h>

int	main(void)
{
	char	str[15] = "Hello, world!\n";

	ft_striteri(str, ft_putnstr);
	return (0);
}

void	ft_putnstr(unsigned int n, char *str)
{
	write(STDOUT_FILENO, str, n);
	write(STDOUT_FILENO, "\n", 1);
}

