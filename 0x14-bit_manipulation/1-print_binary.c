#include "main.h"

/**
* print_binary - a finction that prints the binary representation of a number
* using bitwise operators
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
unsigned int i;

/* Find the highest bit of the number */
for (i = 0; i < ((unsigned int)sizeof(unsigned long int) * 8) - 1; i++)
mask <<= 1;

/* Print the binary representation of the number */
for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((n & mask) == 0)
_putchar('0');
else
_putchar('1');

/* Shift the mask to the right by 1 */
mask >>= 1;
}
}
