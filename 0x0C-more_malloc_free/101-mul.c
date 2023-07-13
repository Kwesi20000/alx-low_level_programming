#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0-9)
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @str: The string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Description: This function multiplies two positive numbers represented as
 * strings and prints the result.
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));
	int i, j, carry;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* Perform multiplication digit by digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;

			carry = prod / 10;

			result[i + j + 1] = prod % 10;

		}
		result[i] += carry;
	}

	/* Skip leading zeros */
	i = 0;
	while (result[i] == 0 && i < result_len - 1)
		i++;

	/* Print the result */
	for (; i < result_len; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 otherwise
 *
 * Description: This is the main function that takes two positive numbers as
 * command-line arguments and multiplies them.
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}
