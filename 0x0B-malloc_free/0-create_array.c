#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates and array of chars
 *@size: size of array
 *@c: character to be printed
 *Return: char
 *
*/
char *create_array(unsigned int size, char c)
{
char *array
unsigned int i;
i = 0;
if (size == 0)
{
return ('\0');
}
else
{
array = malloc(sizeof(char) * size);
if (array == '\0')
{
return ('\0');
}
else
{
while (i < size)
{
array[i] = c;
i++;
}
}
return (array);
}
}
