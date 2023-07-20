#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all the arguments passed to the function
 * @n: The number of arguments
 * @...: Variable number of arguments to be summed up
 *
 * Return: The sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}
