#include "monty.h"

/***
 * free_stack - frees the linked list
 * @stack: head pointer
 * Description
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
