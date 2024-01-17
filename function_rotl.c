#include "monty.h"
/**
  *rotl- rotates stack top
  *@header: head
  *@counter: line_number
  *Return: no return
 */
void rotl(stack_t **header,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *header, *aux;

	if (*header == NULL || (*header)->next == NULL)
	{
		return;
	}
	aux = (*header)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *header;
	(*header)->next = NULL;
	(*header)->prev = tmp;
	(*header) = aux;
}
