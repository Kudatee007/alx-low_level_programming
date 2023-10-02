#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - A program that copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or the exit code on failure.
 */

int main(int argc, char *argv[])
{
	int fd__from, fd__to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file-from file-to\n", argv[0]);
		return (97);
	}

	fd__from = open(argv[1], O_RDONLY);
	if (fd__from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd__to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd__to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(fd__from);
		return (99);
	}

	while ((bytes_read = read(fd__from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd__to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(fd__from);
			close(fd__to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd__from);
		close(fd__to);
		return (98);
	}

	if (close(fd__from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd__from);
		return (100);
	}

	if (close(fd__to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd__to);
		return (100);
	}

	return (0);
}
