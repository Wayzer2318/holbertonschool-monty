#include "monty.h"
/**
 *
 *
 *
 */
void _push(stack_t **stack, unsigned int num)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));

	if (!newNode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newNode->next = *stack;
	newNode->prev = NULL;
	newNode->n = num;

	if (*stack)
		(*stack)->prev = newNode;
	*stack = newNode;
}

/**
 *
 *
 *
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
		return;
	(void) line_number;
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
