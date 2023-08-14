#include "main.h"
/**
 * char *_memcpy - function that copy memory area
 * @dest: destination
 * @src: source
 * @n: unsigned
 * Return: original_dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;

while (n--)
{
	*dest++ = *src++;
}
return (original_dest);
}
