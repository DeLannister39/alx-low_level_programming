#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: The first integer to be swap
 * @b: The Second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
