#include <unistd.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

void	ft_putstr(char const *s)
{
	size_t	size;

	if (s == NULL)
		return ;
	size = ft_strlen(s);
	write(STDOUT_FILENO, s, size);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (*(s + len) != '\0')
		len += 1;
	return (len);
}

void	ft_putstr(char const *s);

int	main(void)
{
	char	*str = "Hello, World! I'm John. Bye!!";

	ft_putstr(str);
}
