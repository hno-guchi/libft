#include <limits.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	if (!str)
		return (0);
	while (((*(str + i) >= 9) && (*(str + i) <= 13)) || (*(str + i) == 32))
		i += 1;
/*
	while ((*(str + i) == '-') || (*(str + i) == '+'))
	{
		if (*(str + i) == '-')
			sign *= -1;
		i += 1;
	}
*/
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		sign = (*(str + i) == '-') ? -1 : 1;
		i += 1;
	}
	while (((*(str + i) >= '0') && (*(str + i) <= '9')))
	{
		num = (num * 10) + (*(str + i) - '0');
		i += 1;
	}
	num *= sign;
	return(num);
}

int	ft_atoi2(char *str)
{
	long long	res;
	long long	max;
	int		sign;

	res = 0;
	max = 0x7fffffffffffffff;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str += 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-')? -1 : 1;
		str += 1;
	}
	while ('0' <= *str && *str <= '9')
	{
		if (res < max - (*str - '0') / 10)
			res = 10 * res + (*str - '0');
		else
			res = (sign == -1) ? (max + 1) : max;
		str += 1;
	}
	return (res);
}

int	ft_atoi(const char *str);
int	ft_atoi2(char *str);

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	num = -1;
	int	num2 = -1;
	int	num3 = -1;
	long long int	max = 0x7fffffffffffffff;

	printf("0x7fffffffffffffff = %lld\n\n", max);
	num = atoi("-2147483648");
	printf("\natoi(\"-2147483648\");                 = %11d\n", num);
	num2 = ft_atoi("-2147483648");
	printf("ft_atoi(\"-2147483648\");              = %11d\n", num2);
	num3 = ft_atoi2("-2147483648");
	printf("ft_atoi2(\"-2147483648\");              = %11d\n", num3);

	num = atoi("0");
	printf("\natoi(\"0\");                 = %11d\n", num);
	num2 = ft_atoi("0");
	printf("ft_atoi(\"0\");              = %11d\n", num2);
	num3 = ft_atoi2("0");
	printf("ft_atoi2(\"0\");              = %11d\n", num3);

	num = atoi("-0");
	printf("\natoi(\"-0\");                 = %11d\n", num);
	num2 = ft_atoi("-0");
	printf("ft_atoi(\"-0\");              = %11d\n", num2);
	num3 = ft_atoi2("-0");
	printf("ft_atoi2(\"-0\");              = %11d\n", num3);

	num = atoi("+0");
	printf("\natoi(\"+0\");                 = %11d\n", num);
	num2 = ft_atoi("+0");
	printf("ft_atoi(\"+0\");              = %11d\n", num2);
	num3 = ft_atoi2("+0");
	printf("ft_atoi2(\"+0\");              = %11d\n", num3);

	num = atoi("2147483647");
	printf("\natoi(\"2147483647\");                 = %11d\n", num);
	num2 = ft_atoi("2147483647");
	printf("ft_atoi(\"2147483647\");              = %11d\n", num2);
	num3 = ft_atoi2("2147483647");
	printf("ft_atoi2(\"2147483647\");              = %11d\n", num3);

	num = atoi("+2147483647");
	printf("\natoi(\"+2147483647\");                 = %11d\n", num);
	num2 = ft_atoi("+2147483647");
	printf("ft_atoi(\"+2147483647\");              = %11d\n", num2);
	num3 = ft_atoi2("+2147483647");
	printf("ft_atoi2(\"+2147483647\");              = %11d\n", num3);

	num = atoi("2147483648");
	printf("\natoi(\"2147483648\");                 = %11d\n", num);
	num2 = ft_atoi("2147483648");
	printf("ft_atoi(\"2147483648\");              = %11d\n", num2);
	num3 = ft_atoi2("2147483648");
	printf("ft_atoi2(\"2147483648\");              = %11d\n", num3);

	num = atoi("21474836489");
	printf("\natoi(\"21474836489\");                 = %11d\n", num);
	num2 = ft_atoi("21474836489");
	printf("ft_atoi(\"21474836489\");              = %11d\n", num2);
	num3 = ft_atoi2("21474836489");
	printf("ft_atoi2(\"21474836489\");              = %11d\n", num3);

	num = atoi("	 	-1234");
	printf("\natoi(\"\\t\\s\\t-1234\");          = %11d\n", num);
	num2 = ft_atoi("	 	-1234");
	printf("ft_atoi(\"\\t\\s\\t-1234\");       = %11d\n", num2);
	num3 = ft_atoi2("	 	-1234");
	printf("ft_atoi2(\"\\t\\s\\t-1234\");       = %11d\n", num3);

	num = atoi("---+--++-1234");
	printf("\natoi(\"---+--++-1234\");        = %11d\n", num);
	num2 = ft_atoi("---+--++-1234");
	printf("ft_atoi(\"---+--++-1234\");     = %11d\n", num2);
	num3 = ft_atoi2("---+--++-1234");
	printf("ft_atoi2(\"---+--++-1234\");     = %11d\n", num3);

	num = atoi("	 ---+--++-1234");
	printf("\natoi(\"\\t\\s---+--++-1234\");    = %11d\n", num);
	num2 = ft_atoi("	 ---+--++-1234");
	printf("ft_atoi(\"\\t\\s---+--++-1234\"); = %11d\n", num2);
	num3 = ft_atoi2("	 ---+--++-1234");
	printf("ft_atoi2(\"\\t\\s---+--++-1234\"); = %11d\n", num3);

	num = atoi("1234a5678");
	printf("\natoi(\"1234a5678\");            = %11d\n", num);
	num2 = ft_atoi("1234a5678");
	printf("ft_atoi(\"1234a5678\");         = %11d\n", num2);
	num3 = ft_atoi2("1234a5678");
	printf("ft_atoi2(\"1234a5678\");         = %11d\n", num3);

	num = atoi("0000");
	printf("\natoi(\"0000\");                 = %11d\n", num);
	num2 = ft_atoi("0000");
	printf("ft_atoi(\"0000\");              = %11d\n", num2);
	num3 = ft_atoi2("0000");
	printf("ft_atoi2(\"0000\");              = %11d\n", num3);

	num = atoi("-0000");
	printf("\natoi(\"-0000\");                = %11d\n", num);
	num2 = ft_atoi("-0000");
	printf("ft_atoi(\"-0000\");             = %11d\n", num2);
	num3 = ft_atoi2("-0000");
	printf("ft_atoi2(\"-0000\");             = %11d\n", num3);

	return (0);
}
