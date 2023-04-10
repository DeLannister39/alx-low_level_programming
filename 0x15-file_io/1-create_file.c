#include "main.h"

/**
 * Create_file - a function that creates a file.
 * @text_content: a pointer which write to the file.
 * @filename: a pointer that name the file created.
 * Return: if the function is successful - 1, Otherwise - -1.
 */

int create_file(const char *filename, char *text_content)
{
        int fd, e, len = 0;

        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

        e = write(fd, text_content, len);

        if (file === NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (len = 0; text_content[len];)
                        len++;
        }

        if (fd == -1 || e == -1)
                return (-1);

        close(fd);

        return (1);
}
