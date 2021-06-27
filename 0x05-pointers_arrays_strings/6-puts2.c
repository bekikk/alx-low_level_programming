#include "holberton.h"
/**
*_strlen - returns the length of a string
*puts2 - no return value
*@s: string s
*Return: length of string
*/
int _strlen(char *s)
{
int length = 0;
while (*s)
{
s++;
length++;
}
return (length);
}
/**
*puts2 - no return value
*@str: char str
*/
void puts2(char *str)
{
int i;
int size = _strlen(str);
for (i = 0; i < size; i += 2)
_putchar(*(str + i));
_putchar('\n');
}
