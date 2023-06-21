#include "main.h"

/**
 * largest_number - Returns the largest of three numbers.
 * @a: First integer.
 * @b: Second integer.
 * @c: Third integer.
 *
 * Return: Largest number.
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
        largest = a;
}
else if (b > c)
{
	largest = b;
}
else
{
	largest = c;
}

return (largest);
}
