#include "lists.h"

/**
 * printis_dlistint - prints all the elements in a dlistint_t list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t printis_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
