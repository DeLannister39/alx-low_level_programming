#include "main.h"

/**
 * read_textfile - Read Text file and prints it to the POSIX
 * @letters: No of Letters to be read
 * @filename: The text file that is being read
 * Return: (0) if Filename is NULL, w- when the actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
