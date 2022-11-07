#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: argument vector for values
 *Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, j, sum;
sum = 0;
for (i = 1; i < argc ; i++)
{
for (j = 0; argv[i][j]; j++)
if (argv[i][j] < '0' || argv[i][j] > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
