#include "monty.h"
/**
 * m_swap - swaps the top two elements of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: line number of code from file read
 */
void m_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *second, *first = *stack;
	int tmp_val;

	(void) line_number;

	if (!stack || !(*stack) || first->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	second = first->next;

	tmp_val = first->n;
	first->n = second->n;
	second->n = tmp_val;
}
