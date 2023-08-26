#include "monty.h"

/**
 * fetch_command - maps a token to a command
 * @token:token to be matched
 * @top: pointer to the top of the stack
 * @line_number: line number
 */
void fetch_command(char *token, stack_t **top, unsigned int line_number)
{
	instruction_t cmd[] = {
		{"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"sub", m_sub},
		{"add", m_add},
		{"mul", m_mul},
		{"swap", m_swap},
		{"pchar", m_pchar},
		{"mod", m_mod},
		{"pstr", m_pstr},
		{"rotl", m_rotl},
		{"nop", m_nop},
		{"div", m_div},
		{NULL, NULL}
	};
	int i = 0;

	while (cmd[i].opcode != NULL)
	{
		if (strcmp(token, cmd[i].opcode) == 0)
		{
			cmd[i].f(top, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
