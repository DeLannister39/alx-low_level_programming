#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: The number to printed in binary.
 * Return: NULL
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int value;
	
	for (i = 63; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
