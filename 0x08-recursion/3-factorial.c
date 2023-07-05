#include "main.h"

/**
 * factorial - Returns the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the number, or -1 if there's an error
 */
int factorial(int n)
{
if (n < 0)        /* Base case: error condition */
return (-1);

if (n == 0)       /* Base case: factorial of 0 is 1 */
return (1);

return (n * factorial(n - 1)); /* Recursive call to calculate factorial */
}
