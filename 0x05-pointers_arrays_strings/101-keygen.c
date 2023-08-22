#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * generateRandomChar - Generates a random character from the charset.
 * Return: The generated random character.
 */
char generateRandomChar(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);
	return (charset[index]);
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = generateRandomChar();
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
