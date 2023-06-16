#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 97; v < 123; v++)
	{
		if (v != 101 && v != 113)
		{
			putchar(v);
		}
	}
	putchar('\n');
	return (0);
}

