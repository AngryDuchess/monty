#include "monty.h"

/**
 * main - entry point of interpreter
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS on success EXIT_FAILURE on error
 */
global_var_t globv;

int main(int argc, char **argv)
{
	FILE *file_pointer;
	ssize_t r_bytes;
	size_t len = 0;
	char *token = NULL;
	char *line;
	stack_t *head = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_pointer = fopen(argv[1], "r");
	if (file_pointer == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((r_bytes = getline(&line, &len, file_pointer)) != -1)
	{
		line_number++;
		token = fetch_tok(line, " \t\n");
		if (token != NULL)
		{
			if (strcmp(token, "push") == 0)
			{
				int extracted_value = atoi(line);
				sprintf(globv.arg, "%d", extracted_value);
			}
			fetch_command(token, &head, line_number);
		}

	}

	free(line);
	free_stack(&head);
	fclose(file_pointer);
	return (0);
}
