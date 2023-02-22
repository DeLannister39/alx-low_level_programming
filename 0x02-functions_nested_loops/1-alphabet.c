#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char alphabet;

	for (alphabet='a'; alphabet<='z'; alphabet++)
		_putchar(alphabet);
	
	_putchar('\n');
}
