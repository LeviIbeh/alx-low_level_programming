#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;


	while (head != NULL)
	{
		temporary = head;
		free(head);
		head = temporary->next;
	}

}
