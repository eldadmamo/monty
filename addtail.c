#include "monty.h"
/**
 * function_queue - display the top
 * @header: stack head
 * @counter: line_number
 * Return: no return
*/
void function_queue(stack_t **header, unsigned int counter)
{
	(void)header;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addtail - add node to the tail stack
 * @n: new_value
 * @header: head of the stack
 * Return: no return
*/
void addtail(stack_t **header, int n)
{
	stack_t *new_node, *aux;

	aux = *header;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*header = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
