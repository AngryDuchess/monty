#include "monty.h"

/**
 * m_pop - removes top value element of a stack
 * @stack: pointer to the head of stack
 * @line_number: line number
 * Return: nothing
 */

void m_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *stack;
	*stack = h->next;
	free(h);
}
