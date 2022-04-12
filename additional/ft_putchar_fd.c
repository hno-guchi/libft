#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd == STDOUT_FILENO || fd == STDIN_FILENO || fd == STDERR_FILENO)
		write(fd, &c, 1);
	return ;
}

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	i = 0;
	int	j = 0;
	char	c;
	char	*str = "Hello. I'm Micky. Welocome to Disney World!!";

	while (i < 5)
	{
		c = i + '0';
		write(STDOUT_FILENO, "\nfd = ", 6);
		write(STDOUT_FILENO, &c, 1);
		write(STDOUT_FILENO, " | ", 3);
		while (*(str + j) != '\0')
			ft_putchar_fd(*(str + j++), i);
		j = 0;
		i += 1;
	}
	return (0);
}
