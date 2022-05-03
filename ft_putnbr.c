#include <unistd.h>

void	ft_putnbr(int n)
{
	long int	ln;
	char		c;

	ln = (long int)n;
	if (ln < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		ln *= -1;
	}
	if (ln > 9)
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
	else
	{
		c = ln + '0';
		write(STDOUT_FILENO, &c, 1);
	}
}

void	ft_putnbr(int n);

#include <limits.h>
int	main(void)
{
	write(STDOUT_FILENO, "\nINT_MIN = ", 11);
	ft_putnbr(INT_MIN);
	write(STDOUT_FILENO, "\nINT_MAX =  ", 12);
	ft_putnbr(INT_MAX);
	write(STDOUT_FILENO, "\n", 1);
}
