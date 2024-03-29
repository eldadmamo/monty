#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO 
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
ssize_t getline(char **pstring, size_t *size, FILE *stream);
char  *clean_line(char *content);
void function_push(stack_t **header, unsigned int number);
void function_pall(stack_t **header, unsigned int number);
void function_pint(stack_t **header, unsigned int number);
int execution(char *content, stack_t **header, unsigned int counter, FILE *file);
void stackoverflow(stack_t *header);
void function_pop(stack_t **header, unsigned int counter);
void function_swap(stack_t **header, unsigned int counter);
void function_add(stack_t **header, unsigned int counter);
void function_nop(stack_t **header, unsigned int counter);
void function_sub(stack_t **header, unsigned int counter);
void function_div(stack_t **header, unsigned int counter);
void function_mul(stack_t **header, unsigned int counter);
void function_mod(stack_t **header, unsigned int counter);
void function_pchar(stack_t **header, unsigned int counter);
void function_pstr(stack_t **header, unsigned int counter);
void rotl(stack_t **header, unsigned int counter);
void rotate(stack_t **header, __attribute__((unused)) unsigned int counter);
void headnode(stack_t **header, int n);
void addtail(stack_t **header, int n);
void function_queue(stack_t **header, unsigned int counter);
void function_stack(stack_t **header, unsigned int counter);
#endif
