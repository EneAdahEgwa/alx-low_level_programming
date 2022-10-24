#include "main.h"
/**
 *_strlen - Returns the length of a string.
 *@str: string count.
 *Return: Length.
*/
int _strlen(const char *s)
{
int c = 0;
while (*s++)
c++;
return (c);
}
