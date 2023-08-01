#include "lists.h"

/**
 * listint_len - returns number of linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
