#include "lists.h"

/*
 * print_dlistint - Prints the elements
 * @h: Head pointer to the list.
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
