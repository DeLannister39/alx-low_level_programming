#include "main.h"

/***
 * flip_bits -  function that returns the number of bits you would need to flip.
 *
 * @n: value of the first number
 *
 * @m: value of the second number
 *
 * Return: numbers bits changed
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int value;
	unsigned long int value1 = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		value = value1 >> a;
		if (value & 1)
			num++;
	}

	return (num);
}
