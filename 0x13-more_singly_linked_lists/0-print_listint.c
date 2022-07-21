#include "lists.h"

/**
  * print_listint - Function prints all elements of listint
  * @h: Pointer pinting to the next node
  *
  * Returnn: Number of nodes
  */



size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while(h)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		i++;
	}
	return (i);
}
