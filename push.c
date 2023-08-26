#include "monty.h"

/**
 * m_push - pushes an element to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of code from file read
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = global_var;
	new->prev = NULL;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		*stack = new;
	}
}
