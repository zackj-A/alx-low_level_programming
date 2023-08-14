#include "main.h"
/**
 * char *_memset - a fuuction that fills memory
 * @b: char 1
 * @s: char 2
 * @n: value 3
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0 ; i < n ; ++i)
{
	s[i] = b;
}
return (s);
}
