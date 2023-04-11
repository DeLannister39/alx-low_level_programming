#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: The input value to search.
 *
 * @index: the function creates a bit mask with a 1.
 *
 * Return: Number of the bit.
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int number;

	if (index > 63)
		return (-1);

	number = (n >> index) & 1;

	return (number);
}
