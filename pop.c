#include "monty.h"

/**
 * m_pop - removes top value element of a stack
 * @head: stack head
 * @line_number: line number
 * Return: nothing
 */

void m_pop(stck_t **head, unsigned int line_number)
{
	stack_t *h;
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}
