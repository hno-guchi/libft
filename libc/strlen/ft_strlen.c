#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while(*(s + len) != '\0')
		len += 1;
	return (len);
}

size_t ft_strlen(const char *s);

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[30] = "12345678901234567890123456789";
	char	str1[2] = "1";
	char	str2[1] = "\0";
	char	str3[1];

	printf("\nstr0[30] = %s\n", str0);
	printf("str1[2]  = %s\n", str1);
	printf("str2[1]  = \\0\n");
	printf("str3[1];\n");

	printf("\nstrlen(str0)    = %d\n", (int)strlen(str0));
	printf("ft_strlen(str0) = %d\n", (int)ft_strlen(str0));
	
	printf("\nstrlen(str1)    = %d\n", (int)strlen(str1));
	printf("ft_strlen(str1) = %d\n", (int)ft_strlen(str1));

	printf("\nstrlen(str2)    = %d\n", (int)strlen(str2));
	printf("ft_strlen(str2) = %d\n", (int)ft_strlen(str2));

	printf("\nstrlen(str3)    = %d\n", (int)strlen(str3));
	printf("ft_strlen(str3) = %d\n", (int)ft_strlen(str3));

	printf("\nstrlen(\"\")        = %d\n", (int)strlen(""));
	printf("ft_strlen(\"\")     = %d\n", (int)ft_strlen(""));

	return (0);
}
