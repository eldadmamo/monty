#include "monty.h"
/**
 * function_mul - multiplies two elements of stack.
 * @header: stack head
 * @counter: number
 * Return: no return
*/
void function_mul(stack_t **header, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	h = *header;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*header = h->next;
	free(h);
}
