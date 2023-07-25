#include "main.h"
/**
 * _strlen - to return the length of a string
 * @s: parameter collected
 * Return: length
 */
int _strlen(char *s)
{
	int l;
	int count = 0;

	for (l = 0 ; s[l] != '\0' ; l++)
		count++;
	return (count);
}
