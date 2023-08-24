#include "monty.h"

/**
 * m_pall - Prints values in stack_t linked list
 * @head: Stack head
 * @h: current node
 * @line_number: Line number
 * Return: nothing
 */

void m_pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void) line_number;

	h = *head;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next
	}
}
