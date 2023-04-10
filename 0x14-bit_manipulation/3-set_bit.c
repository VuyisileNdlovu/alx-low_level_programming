#include "main.h"

/**
 * set_bit -a function that sets a bit at a given index to 1
 * @n: the number to set bit in
 * @index: The index to set bit at 1
 *
 * Return: 1 if success or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
