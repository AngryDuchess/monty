#include "monty.h"

/**
 * m_rotl - rotates the stack to the top
 * @stack: pointer to the head of the stack
 * @line_number: line number
 * Return: nothing
 */

void m_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *h;

	h = *stack;
	if (!*stack || !(*stack)->next)
	{
		return;
	}

	while (h->next)
	{
		h = h->next;
	}
	h->next = *stack;
	(*stack)->prev = h;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->next = NULL;
}
