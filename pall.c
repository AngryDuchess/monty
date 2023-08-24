#include "monty.h"

/**
 * m_pall - Prints values in stack_t linked list
 * @stack: pointer to Stack head
 * @line_number: Line number
 * Return: nothing
 */

void m_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void) line_number;

	h = *stack;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
