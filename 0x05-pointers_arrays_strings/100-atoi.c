#include "main.h"
/**
 *_atoi - converts a string to an integer.
 *@s: input string.
 *Return: integer.
*/
int _atoi(char *s)
{
int i;
i = 1;
unsigned int d = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
d = (d * 10) + (*s - '0');
else if (d > 0)
break;
} while (*s++);
return (d * i);
}
