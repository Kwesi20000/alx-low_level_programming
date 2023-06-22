#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
long factor = 2;
long largest_factor = 0;

while (n > 1)
{
if (n % factor == 0)
{
largest_factor = factor;
while (n % factor == 0)
n /= factor;
}
factor++;
}

return (largest_factor);
}

int main(void)
{
long number = 612852475143;
long largest_factor = largest_prime_factor(number);

printf("%ld\n", largest_factor);

return (0);
}
