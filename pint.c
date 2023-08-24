#include "monty.h"

/**
 * m_pint - prints the top value of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number
 * Return: none
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!stack || !(*stack))
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", tmp->n);
}

