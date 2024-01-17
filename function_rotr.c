#include "monty.h"
/**
  *rotate- rotates stack bottom
  *@header: head
  *@counter: line_number
  *Return: no return
 */
void rotate(stack_t **header, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *header;
	if (*header == NULL || (*header)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *header;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*header)->prev = copy;
	(*header) = copy;
}
