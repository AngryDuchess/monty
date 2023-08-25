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
	(*stack)->next->prev = NULL;

	while (h->next)
	{
		h = h->next;
	}
	h->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = h;
	(*stack) = *stack
