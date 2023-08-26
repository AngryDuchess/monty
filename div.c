#include "monty.h"

/**
 * m_div - divides the first two elements of a stack
 * @stack: pointer to head of stack
 * @line_number: line number
 * Return: nothing
 */

void m_div(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (!stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
	       exit(EXIT_FAILURE);
	}

	h = *stack;
	h->next->n /= h->n;
	*stack = h->next;

	free(h);
}
