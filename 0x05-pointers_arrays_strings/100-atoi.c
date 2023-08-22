#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (result * sign);
}

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);

	nb = _atoi("-402");
	printf("%d\n", nb);

	nb = _atoi("214748364");
	printf("%d\n", nb);

	nb = _atoi("0");
	printf("%d\n", nb);

	nb = _atoi("Suite 402");
	printf("%d\n", nb);

	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);

	return (0);
}

