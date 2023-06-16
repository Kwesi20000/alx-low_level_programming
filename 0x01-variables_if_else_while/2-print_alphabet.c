#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int h;

	for (h = 0; h < 26; h++)
	{
		putchar(alp[h]);
	}
	putchar('\n');
	return (0);
}

