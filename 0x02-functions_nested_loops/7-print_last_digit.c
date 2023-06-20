#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int h;

	if (n < 0)
	n = -n;

	h = n % 10;

	if (h < 0)
		h = -h;

	_putchar(h + '0');

	return (h);
}
