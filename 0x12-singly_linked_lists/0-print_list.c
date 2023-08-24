#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked list
 * @h: pointer to the list_t print list
 *
 * Return: print the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
