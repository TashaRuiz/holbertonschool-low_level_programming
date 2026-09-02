#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesread = 0, byteswritten;
	char buffer;
	int fildes;

	if (filename == NULL)
	{
		return (0);
	}
	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		return (0);
	}
	while ((size_t)bytesread < letters && read(fildes, &buffer, 1) == 1)
	{
		byteswritten = write(STDOUT_FILENO, &buffer, 1);
		if (byteswritten != 1)
		{
			close(fildes);
			return (0);
		}
		bytesread++;
	}
	close(fildes);
	return (bytesread);
}
