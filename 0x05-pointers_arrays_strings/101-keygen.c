#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char password[15];
int i;

srand(time(NULL));

for (i = 0; i < 12; i++)
{
password[i] = rand() % 94 + 33;
}

password[i++] = 'T';
password[i++] = 'a';
password[i++] = 'd';
password[i++] = 'a';
password[i++] = '!';
password[i] = '\0';

printf("%s\n", password);

return (0);
}
