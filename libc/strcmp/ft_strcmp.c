#include <stddef.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
	{
		if ((*(s1 + i) - *(s2 + i)) != 0)
			return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
		i += 1;
	}
	return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
}

int	ft_strcmp(const char *s1, const char *s2);

#include <string.h>
#include <stdio.h>

int	main(void)
{
	int	diff = 0;
	char	str0[10] = "123456789";
	char	str1[10] = "1234567890";
	char	str2[10] = "1234567890";
	char	str3[1] = "\0";
	char	str4[1];
	char	*str5;

	printf("\nstr0[10] = ");
	for (int i = 0; i < 10; i++)
		if (str0[i] == '\0')
			printf("\\0");
		else
			printf("%c", str0[i]);

	printf("\nstr1[10] = ");
	for (int i = 0; i < 10; i++)
		if (str1[i] == '\0')
			printf("\\0");
		else
			printf("%c", str1[i]);

	printf("\nstr2[10] = ");
	for (int i = 0; i < 10; i++)
		if (str2[i] == '\0')
			printf("\\0");
		else
			printf("%c", str2[i]);
	printf("\nstr3[1] = \\0");
	printf("\nstr4[1];");
	printf("\n*str5;");

	printf("\n\n");
	diff = strcmp(str0, "123456789");
	printf("strcmp(str0, \"123456789\");       = %4d\n", diff);
	diff = ft_strcmp(str0, "123456789");
	printf("ft_strcmp(str0, \"123456789\");    = %4d\n", diff);

	printf("\n");
	diff = strcmp(str0, "12345a789");
	printf("strcmp(str0, \"12345a789\");       = %4d\n", diff);
	diff = ft_strcmp(str0, "12345a789");
	printf("ft_strcmp(str0, \"12345a789\");    = %4d\n", diff);

	printf("\n");
	diff = strcmp(str0, "12345");
	printf("strcmp(str0, \"12345\");           = %4d\n", diff);
	diff = ft_strcmp(str0, "12345");
	printf("ft_strcmp(str0, \"12345\");        = %4d\n", diff);

	printf("\n");
	diff = strcmp(str0, "123456789012");
	printf("strcmp(str0, \"123456789012\");    = %4d\n", diff);
	diff = ft_strcmp(str0, "123456789012");
	printf("ft_strcmp(str0, \"123456789012\"); = %4d\n", diff);

	printf("\n");
	diff = strcmp("", "abcde");
	printf("strcmp(\"\", \"abcde\");             = %4d\n", diff);
	diff = ft_strcmp("", "abcde");
	printf("ft_strcmp(\"\", \"abcde\");          = %4d\n", diff);

	printf("\n");
	diff = strcmp("abcde", "");
	printf("strcmp(\"abcde\", \"\");             = %4d\n", diff);
	diff = ft_strcmp("abcde", "");
	printf("ft_strcmp(\"abcde\", \"\");          = %4d\n", diff);

	printf("\n");
	diff = strcmp("\0", "1");
	printf("strcmp(\"\\0\", \"1\");               = %4d\n", diff);
	diff = ft_strcmp("\0", "1");
	printf("ft_strcmp(\"\\0\", \"1\");            = %4d\n", diff);

	printf("\n");
	diff = strcmp("1", "\0");
	printf("strcmp(\"1\", \"\\0\");               = %4d\n", diff);
	diff = ft_strcmp("1", "\0");
	printf("ft_strcmp(\"1\", \"\\0\");            = %4d\n", diff);

	printf("\n");
	diff = strcmp("1", str5);
	printf("strcmp(\"1\", str5);               = %4d\n", diff);
	diff = ft_strcmp("1", str5);
	printf("ft_strcmp(\"1\", str5);            = %4d\n", diff);

	printf("\n");
	diff = strcmp("", "");
	printf("strcmp(\"\", \"\");                  = %4d\n", diff);
	diff = ft_strcmp("", "");
	printf("ft_strcmp(\"\", \"\");               = %4d\n", diff);

	printf("\n");
	diff = strcmp(str3, "1");
	printf("strcmp(str3, \"1\");               = %4d\n", diff);
	diff = ft_strcmp(str3, "1");
	printf("ft_strcmp(str3, \"1\");            = %4d\n", diff);

	printf("\n");
	diff = strcmp(str4, "1");
	printf("strcmp(str4, \"1\");               = %4d\n", diff);
	diff = ft_strcmp(str4, "1");
	printf("ft_strcmp(str4, \"1\");            = %4d\n", diff);

	printf("\n");
	diff = strcmp(str1, str2);
	printf("strcmp(str1, str2);              = %4d\n", diff);
	diff = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2);           = %4d\n", diff);

	return (0);
}
