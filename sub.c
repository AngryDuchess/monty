#include "monty.h"

/**
 * m_sub - subtracts the top elements of the stack
 * @stack: pointer to head of the stack
 * @line_number: line number
 * Return: nothing
 */

void m_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (!stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *stack;
	h->next->n -= h->n;
	*stack = h->next;

	free(h);
}
