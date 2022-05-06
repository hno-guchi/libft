#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s1);
	dest = (char *)malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (len > 0)
	{
		len -= 1;
		*(dest + len) = *(s1 + len);
	}
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s + len) != '\0')
		len += 1;
	return (len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[10] = "123456789";
	char	*dest0;
	char	*ft_dest0;

	dest0 = strdup(str0);
	ft_dest0 = ft_strdup(str0);

	printf("\nstr0[10]           = %s [%p] ~ [%p]\n", str0, &str0[0], &str0[9]);
	printf("strdup(str0)       = %s [%p] ~ [%p]\n", dest0, &dest0[0], &dest0[9]);
	printf("ft_strdup(str0)    = %s [%p] ~ [%p]\n", ft_dest0, &ft_dest0[0], &ft_dest0[9]);

	free(dest0);
	free(ft_dest0);
	return (0);

}
