#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: dest string
 * @src: source string
 * @n: number of bytes to be counted
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a;

	for (a = 0 ; a < n && *src != '\0' ; a++)
	{
		dest[len + a] = *src;
		src++;
	}
	dest[len + a] = '\0';
	return (dest);
}
