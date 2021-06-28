#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
srand(time(0));
int r = rand();
printf("%i\n", r);
return (0);
}
