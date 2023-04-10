#include "main.h"

/**
* create_file - create a function that creates a file
* @filename: is the name of the file to create
* @text_content:is a NULL terminated string to write to the file
*
* Return: 1 if success, -1 if fail
*/
int create_file(const char *filename, char *text_content)
{
int eman, vuyi, len = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
eman = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
vuyi = write(eman, text_content, len);

if (eman == -1 || vuyi == -1)
return (-1);

close(eman);

return (1);
}
