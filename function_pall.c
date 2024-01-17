#include "monty.h"
/**
 * function_pall - display stack
 * @header: stack head
 * @counter: no used
 * Return: no return
*/
void function_pall(stack_t **header, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *header;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
