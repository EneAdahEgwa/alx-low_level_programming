#include "main.h"
/**
 *_strlen - Returns the length of a string.
 *@s: string count.
 *Return: c.
*/
int _strlen(char *s)
{
int c = 0;
while (*s++)
c++;
return (c);
}
