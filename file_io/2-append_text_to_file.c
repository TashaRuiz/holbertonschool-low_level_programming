#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes = write(fd, text_content, 1);
	while (text_content[bytes] != '\0')
	{
		bytes += write(fd, text_content + bytes, 1);
	}
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
