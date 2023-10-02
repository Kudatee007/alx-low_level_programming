#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - A function that creates a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_description;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_description = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_description == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file_description, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_description);
			return (-1);
		}
	}

	close(file_description);
	return (1);
}
