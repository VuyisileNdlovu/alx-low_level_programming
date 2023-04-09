#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is a string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[1]; i++)
	{
		if (b[1] < '0' || b[1] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[1] - '0');
	}

	return (dec_val);
}
