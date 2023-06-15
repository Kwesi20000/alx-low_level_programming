#include <stdio.h>
/**
 * main -  program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)", sizeof(a));
printf("Size of an int: %lu byte(s)", sizeof(b));
printf("Size of a long int: %lu byte(s)", sizeof(c));
printf("Size of long long int: %lu byte(s)", sizeof(d));
printf("Size of float: %lu byte(s)", sizeof(f));
return (0);
}
