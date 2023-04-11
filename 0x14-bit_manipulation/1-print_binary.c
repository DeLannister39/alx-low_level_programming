#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: The number to printed in binary.
 * Return: NULL
 */
void print_binary(unsigned long int n)
{
	int a;
	int num;
	num = 0;

	unsigned long int value;
	
	for (a = 63; a >= 0; a--)
	{
		value = n >> a;

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
