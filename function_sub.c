#include "monty.h"
/**
  *function_sub- sustration the value
  *@header: head
  *@counter: line_number
  *Return: no return
 */
void function_sub(stack_t **header, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *header;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		stackoverflow(*header);
		exit(EXIT_FAILURE);
	}
	aux = *header;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*header = aux->next;
	free(aux);
}
