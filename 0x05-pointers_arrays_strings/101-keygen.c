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
int num = rand();
printf("%i\n", num);
return (0);
}
