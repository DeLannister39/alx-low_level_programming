#include <stdio.h>

/**
 * main - Print alphabet lowercase.
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
