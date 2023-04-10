#include "main.h"

/**
* clear_bit -A function that sets the value of a given bit to 0
* @n:[pointer to the number to change
* @index: the index starting from 0 of the bit to be set
*
* Return: 1 if success , -1 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max = 0x01;

max = ~(max << index);
if (max == 0x00)
return (-1);
*n &= max;
return (1);
}
