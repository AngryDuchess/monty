#include "monty.h"

/**
 * m_sub - subtracts the top elements of the stack
 * @head: pointer to head of the stack
 * @line_number: line number
 * Return: nothing
 */

void (stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (!head || !(*head)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *head;
	h->next->n -= h->n;
	*head = h->next;

	free(h);
}
