#include "monty.h"
/**
 * main - entry point of interpreter
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS on success EXIT_FAILURE on error
 */
int main(int argc, char **argv)
{
	FILE *file_pointer;
	ssize_t bytes_Read;
	size_t len = 0;
	chat *token = NULL;
	char *line =  NULL;
	stack_t *head = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_pointer = fopen(argv[1], "r");
	if (file_pointer == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((r_bytes = getline(&line, &len, file_pointer)) != -1)
	{
		line_number++;
		token = fetch_tok(line, line_number);
		if (token != NULL)
			fetch_command(token, &head, line_number);
	}
	free(line);
	free_stack(head);
	fclose(file_pointer)
	return (0);
}