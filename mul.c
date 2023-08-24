#include "monty"

/**
 * m_mul - multiples the first two top elements of a stack
 * @head: stack head
 * @line_number: line number
 * Return: nothing
 */

void (stack_t **head, unsigned int line_number)
{
	stack_t *h;

	if (!head || !(*head)->next)
	{
		fprintf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	h = *head;
	h->next->n *= h->n;
	*head = h->next;

	free(h);
}
