#include "monty.h"
/**
 * function_pint - display the top
 * @header: head
 * @counter: line_number
 * Return: no return
*/
void function_pint(stack_t **header, unsigned int counter)
{
	if (*header == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*header)->n);
}
