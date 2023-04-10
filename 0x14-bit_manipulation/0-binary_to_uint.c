#include "main.h"

/**
 * binary_to_uint - A function that convert binary number to an unsigned int.
 * @b: A pointer.
 * Return: the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int value;
	value = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
