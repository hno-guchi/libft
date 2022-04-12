#include <unistd.h>

void	ft_putchar(char c)
{
	if (!c)
		return ;
	write (STDOUT_FILENO, &c, 1);
}

void	ft_putchar(char c);

int	main(void)
{
	int	i = 0;
	char	str[30] = "Hello, World! I'm Jenny. Bye!!";

	while (*(str + i) != '\0')
		ft_putchar(*(str + i++));
}
