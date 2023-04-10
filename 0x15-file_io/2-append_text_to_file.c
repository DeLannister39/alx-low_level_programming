#include "main.h"

/**
 * append_text_to_file - The function takes two arguments: filename and text_content.
 * @text_content: a pointer which write to the file.
 * @filename: a pointer that name the file created.
 *
 * Return: If filename is NULL, the function returns  - -1.
 *         If the user lacks write permissions - -1.
 *         else - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, e, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	e = write(o, text_content, len);

	if (fd == -1 || e == -1)
		return (-1);

	close(fd);

	return (1);
}
