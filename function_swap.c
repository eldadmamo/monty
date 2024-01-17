#include "monty.h"
/**
 * function_swap - adds two elements stack
 * @header: head
 * @counter: line_number
 * Return: no return
*/
void function_swap(stack_t **header, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *header;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
