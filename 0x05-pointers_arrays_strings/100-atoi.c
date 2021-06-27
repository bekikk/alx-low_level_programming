#include "holberton.h"
/**
*mapint - maps a character to its integer form
*@a: character to be mapped
*Return: the integer version of the char
*/
int mapint(char a)
{
if (a >= 48 && a <= 57)
return ((int)a - 48);
return (0);
}
int isDigit(char i)
{
return (i >= '0' && i <= '9');
}
int _atoi(char *s)
{
unsigned int num = 0, sign = 1, started = 0;
while (*s)
{
if (started && !isDigit(*s))
break;
if (*s == '-')
sign *= -1;
if (isDigit(*s))
{
started = 1;
num =  num *10 + mapint(*s);
}
s++;
}
return (sign *num);
}
