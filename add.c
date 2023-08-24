#include "monty.h"

/**
 * m_add - adds the top two elements of the stack
 * @stack: pointer to head of stack
 * @line_number: line number
 * Return: nothing
 */

void m_add(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (!stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *stack;
	h->next->n = h->n;
	*stack += h->next;
	free(h);
}
