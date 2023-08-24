#include "monty.h"

/**
 * m_add - adds the top two elements of the stack
 * @head: pointer to head of stack
 * line_number: line number
 * Return : nothing
 */

void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (!head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *head;
	h->next->n = h->n;
	*head += h->next;
	free(h);
}
