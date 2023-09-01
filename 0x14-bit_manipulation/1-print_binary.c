#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)

	/*Right shift n by 1 bit and recursively print the rest*/
	print_binary(n >> 1);

	/*Use bitwise AND to get the last bit and print it*/
	_putchar((n & 1) + '0');
}

