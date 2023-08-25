#include "monty.h"

/**
 * m_push - pushes an element to the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of code from file read
 */
void m_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = global_var;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		new_node->next = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
