#include "main.h"

/**
 * open_file - This function checks if the file can be opened.
 * @file_1: file predestination.
 * @file_2: file destination.
 * @argv: argument Vector.
 * Return: Null.
 */


void open_file(int file_1, int file_2, char *argv[])
{
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
