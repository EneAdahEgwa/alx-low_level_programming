#include <stdlib.h>
#include "main.h"
/**
 *str_concat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
int length;
char *space;
if (s1 == '\0')
{
s1 = "";
}
if (s2 == '\0')
{
s2 = "";
}
length = _strlen(s1) + _strlen(s2);
if (s1 != '\0' && s2 != '\0')
{
space = malloc(sizeof(char) * length + 1);
if (space == '\0')
{
return ('\0');
}
else
{
space = _strcat(space, s1);
space = _strcat(space, s2);
}
}
else
{
space = "";
}
return (space);
free(space);
}
