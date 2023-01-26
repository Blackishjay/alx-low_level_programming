#include "lists.h"
/**
 * free_list - Entry point
 * @head:head
 * Return:0 if successfull
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}

	free(head->str);
	free(head);
}
