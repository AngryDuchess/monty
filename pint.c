#include "monty.h"

/**
 * m_pint - prints the top value of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number
 * Return: none
 */
void m_pint(stack_t **stack, unsigned int line_number)
{

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

