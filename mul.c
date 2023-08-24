#include "monty.h"

/**
 * m_mul - multiples the first two top elements of a stack
 * @stack: pointer to head of stack
 * @line_number: line number
 * Return: nothing
 */

void m_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (!stack || !(*stack)->next)
	{
		fprintf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *stack;
	h->next->n *= h->n;
	*stack = h->next;

	free(h);
}
