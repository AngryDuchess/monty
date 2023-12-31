#ifndef MONTY
#define MONTY

#define ARG_SIZE 100

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/stat.h>

extern int global_var;
int global_var;
/**
 * struct bus_s - bolds floag for queue and stack and values
 * @lifi: flag for stack and queue
 * @arg: input values
 */
typedef struct global_var_s
{
	int lifi;
	char arg[ARG_SIZE];
} global_var_t;

extern global_var_t globv;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stacl (or queue)
 * @next: point to the nect element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void m_push(stack_t **stack, unsigned int line_number);
void m_pall(stack_t **stack, unsigned int line_number);
void m_pop(stack_t **stack, unsigned int line_number);
void m_add(stack_t **stack, unsigned int line_number);
void m_sub(stack_t **stack, unsigned int line_number);
void m_mul(stack_t **stack, unsigned int line_number);
void m_pint(stack_t **stack, unsigned int line_number);
void m_swap(stack_t **stack, unsigned int line_number);
void m_pstr(stack_t **stack, unsigned int line_number);
void m_pchar(stack_t **stack, unsigned int line_number);
void m_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number);
void m_div(stack_t **stack, unsigned int line_number);
void m_mod(stack_t **stack, unsigned int line_number);
void m_nop(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);

void fetch_command(char *token, stack_t **top, unsigned int line_number);
char *fetch_tok(char *str, const char *delims);

#endif
