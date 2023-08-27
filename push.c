#include "monty.h"

/**
 * m_push - pushes an element to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of code from file read
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int n;
	(void) line_number;

	if (!globv.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(globv.arg);
	if (!globv.arg[0] && globv.arg[0] != '-')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *stack;

	if (*stack)
	{
		(*stack)->prev= new;
	}
		*stack = new;
}
