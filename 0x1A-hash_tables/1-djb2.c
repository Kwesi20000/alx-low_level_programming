/**
 * hash_djb2 - Hash function using the djb2 algorithm
 * @str: A pointer to the input string (unsigned char *)
 *
 * Return: The hash value for the input string as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
