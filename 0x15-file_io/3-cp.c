#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Individual arguments on display
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	ssize_t bytes_written, bytes_read;
	int file_to, file_from, close_from, close_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) *BUFFSIZE);
	if (buffer == NULL)
	{
		exit(1);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close(file_from);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
			free(buffer);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		close(file_from);
		close(file_to);
		exit(98);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		free(buffer);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_to);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}
