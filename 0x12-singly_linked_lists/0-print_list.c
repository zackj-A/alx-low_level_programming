#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a linked list
 * @h: variable
 * @list_t: variable
 * Return: node_count
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("%s\n", h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
