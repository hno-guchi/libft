#include <stddef.h>
#include <stdio.h>
#include <string.h>

char	*search(char *text, char *key);
void	table(char *key);

int	skip[256];

char	*search(char *text, char *key)
{
	int	m;
	int	n;
	char	*p;

	m = strlen(text);
	n = strlen(key);
	p = text + n - 1;
	while (p < (text + m))
	{
		if (*p == key[n - 1])
			if (strncmp(p - n + 1, key, n) == 0)
				return (p - n + 1);
		
		p = p + skip[*p];
	}
	return (NULL);
}

void	table(char *key)
{
	int	k;
	int	n;

	k = 0;
	n = strlen(key);
	while(k < 256)
	{
		skip[k] = n;
		k += 1;
	}
	k = 0;
	while (k < (n - 1))
	{
		skip[key[k]] = n - 1 - k;
		k += 1;
	}
}

int	main(void)
{
	static char	text[] = "This is a pen. That is a pencil.";
	char		*p;
	char		*key = "pen";

	table(key);
	p = search(text, key);
	while (*p != 0)
	{
		printf("%s\n", p);
		p = search(p + strlen(key), key);
	}
	return (0);
}
