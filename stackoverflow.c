#include "monty.h"
/**
* stackoverflow - frees a doubly linked list
* @header: head of the stack
*/
void stackoverflow(stack_t *header)
{
	stack_t *aux;

	aux = header;
	while (header)
	{
		aux = header->next;
		free(header);
		header = aux;
	}
}
