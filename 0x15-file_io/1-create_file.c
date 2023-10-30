#include "main.h"

/**
 * create_file - Create a file and write text content
 * @filename: The name of file to create
 * @text_content: The text content to write to function
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		result = write(fd, text_content, length);

		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
