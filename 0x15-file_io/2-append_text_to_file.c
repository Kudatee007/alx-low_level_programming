#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_description;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file_description = open(filename, O_WRONLY | O_APPEND);

	if (file_description == -1)
	{
		return (-1);
	}

	bytes_written = write(file_description, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close (file_description);
		return (-1);
	}

	close(file_description);
	return (1);
}
