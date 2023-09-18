#include "main.h"
/**
 * _strlen - function name
 * @s: function parameter
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int j;
int count = 0;
for (j = 0; s[j] != '\0'; j++)
count++;
return (count);
}

