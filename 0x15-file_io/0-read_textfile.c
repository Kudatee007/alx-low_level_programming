#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - A function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letter to read and print.
 *
 * Return: if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_description;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	file_description = open(filename, O_RDONLY);
	if (file_description == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(file_description);
		return (0);
	}

	bytes_read = read(file_description, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_description);

		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_description);

		return (0);
	}

	free(buffer);
	close(file_description);

	return (bytes_read);
}
