#include "lists.h"

/**
 * print_dlistint - prints all the elements in a dlistint_t list
 * @h: pointer to list
 * Return: number of nodes
 **/
size_t prints_dlistint(const dlistint_t *h)
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