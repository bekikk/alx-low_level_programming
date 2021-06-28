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
int r = rand();
srand(time(0));
printf("%i\n", r);
return (0);
}
