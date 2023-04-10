#include "main.h"

/**
* get_endianness - A function tha checks endianness.
*
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *)&i;

if (*c)
return (1);
return (0);
}
