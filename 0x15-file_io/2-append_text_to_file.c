#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file
 * @filename: The name of the file content
 * @text_content: The content of the text
 *
 * Return: -1 on failure, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);
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
