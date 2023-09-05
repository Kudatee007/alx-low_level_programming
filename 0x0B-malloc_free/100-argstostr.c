#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - A function that concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: return NULL IF AC == 0 OR av == NULL OR returns a pointer to a new
 *         string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	size_t total_len;
	int i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + i;
	}

	result = (char *)malloc((total_len + 1) * sizeof(char));

	if (result != NULL)
	{
		result[0] = '\0';

		for (i = 0; i < ac; i++)
		{
			strcat(result, av[i]);
			strcat(result, "\n");
		}
	}
	return (result);
}
