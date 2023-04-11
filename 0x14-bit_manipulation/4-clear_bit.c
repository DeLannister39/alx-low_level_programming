#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: points to a valid memory location and that you have the necessary permissions to modify it.
 *
 * @index: the function creates a bit mask with a 1.
 *
 * Return: if success(1), fail (-1).
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
