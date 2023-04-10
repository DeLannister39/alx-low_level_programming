#include "main.h"

/**
 * read_textfile - Read Text file and prints it to the POSIX
 * @letters: No of Letters to be read
 * @filename: The text file that is being read
 * Return: (0) if Filename is NULL, e- when the actual number of bytes read
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char *buffer;
	ssize_t d;
	ssize_t e;


	buffer = malloc(sizeof(char) * (letters));
	d = read(fd, buffer, letters);
	e = write(STDOUT_FILENO, buffer, d);

	free(buffer);
	close(fd);

	return (e);
}
