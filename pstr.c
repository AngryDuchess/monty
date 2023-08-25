#include "monty.h"

/**
 * m_pstr - prints the string starting at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 * Return: nothing
 */

void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;

	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
