#include "monty.h"
/**
 * function_pchar - display the char top stack
 * @header: head
 * @counter: line_number
 * Return: no return
*/
void function_pchar(stack_t **header, unsigned int counter)
{
	stack_t *h;

	h = *header;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
