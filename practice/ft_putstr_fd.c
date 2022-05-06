#include <unistd.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	size;

	if (s == NULL)
		return ;
	size = ft_strlen(s);
	if (fd == STDOUT_FILENO || fd == STDIN_FILENO || fd == STDERR_FILENO)
		write(fd, s, size);
	return ;
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (s == NULL)
		return (0);
	len = 0;
	while(*(s + len) != '\0')
		len += 1;
	return (len);
}

void	ft_putstr_fd(char const *s, int fd);

int	main(void)
{
	int	i = 0;
	char	c;
	char	*str = "Hello. I'm Karnel. UNIX programming.";

	while (i < 5)
	{
		c = i + '0';
		write(STDOUT_FILENO, "fd = ",5);
		write(STDOUT_FILENO, &c,1);
		write(STDOUT_FILENO, " | ",3);
		ft_putstr_fd(str, i++);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
