#include "main.h"
/**
 * char *_strcpy - to copy string pointer
 * @dest: dest that is on
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src);
{
	int t;

	for (t = 0 ; src[t] != '\0' : t++)
		dest[t] = src[t];
	dest[t] = '\0';
	return (dest);
}
