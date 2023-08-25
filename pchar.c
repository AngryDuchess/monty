#include "monty.h"

/**
 * m_pchar - prints char at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 * Return: nothing
 */

void m_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (h->n < 0 || h->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
