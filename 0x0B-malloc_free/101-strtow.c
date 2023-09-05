#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Function to count the number of words in a string.
 *
 * @str The input string.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count, is_word;

	count = 0;
	is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * Function to split a string into words.
 *
 * @param str The input string.
 *
 * @return A pointer to an array of strings (words), or NULL on failure.
 *         The last element of the returned array is NULL.
 */

char **strtow(char *str)
{
	int num_words, i, j;
	char **word_array;
	char *token;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	word_array = (char **)malloc((num_words + 1) * sizeof(char *));

	if (word_array == NULL)
	{
		return (NULL);
	}

	token = strtok(str, " ");
	i = 0;

	while (token != NULL)
	{
		word_array[i] = strdup(token);

		if (word_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(word_array[j]);
			}
			free(word_array);
			return (NULL);
		}
		token = strtok(NULL, " ");
		i++;
	}
	word_array[i] = NULL;
	return (word_array);
}
