#include "monty.h"
/**
 * function_pop - display the top
 * @header: head
 * @counter: line_number
 * Return: no return
*/
void function_pop(stack_t **header, unsigned int counter)
{
	stack_t *h;

	if (*header == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	*header = h->next;
	free(h);
}
