#include <unistd.h>
#include <stddef.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;
	char		c;

	ln = (long int)n;
	if (fd != STDOUT_FILENO && fd != STDIN_FILENO && fd != STDERR_FILENO)
		return ;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	if (ln > 9)
	{
		ft_putnbr_fd((ln / 10), fd);
		ft_putnbr_fd((ln % 10), fd);
	}
	else
	{
		c = ln + '0';
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd);

#include <limits.h>

int	main(void)
{
	int	i = -1;
	char	c;

	while (++i < 5)
	{
		c = i + '0';
		write(STDOUT_FILENO, "\nfd = ", 6);
		write(STDOUT_FILENO, &c, 1);
		write(STDOUT_FILENO, " | ",3);
		write(STDOUT_FILENO, "INT_MIN = ", 10);
		ft_putnbr_fd(INT_MIN, i);
		write(STDOUT_FILENO, "\n",1);
		write(STDOUT_FILENO, "       | ",9);
		write(STDOUT_FILENO, "INT_MAX = ", 10);
		ft_putnbr_fd(INT_MAX, i);
		write(STDOUT_FILENO, "\n",1);
		return (0);
	}
}
