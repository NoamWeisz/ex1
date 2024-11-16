#include "LinkedList.h"
#include <iostream>
#include <stdio.h>




void addNode(List* q,unsigned int value)
{
	List *current_q = NULL;
	current_q = q;
	while (current_q->next != NULL)
	{
		current_q = current_q->next;
	}
	current_q->next = new List;
	current_q->next->node = value;
	current_q->next->next = NULL;
}

void deleteNode(List* q)
{
	List* current_q = q;
	List* oneBeforeEnd = q;
	List** blankArea = NULL;
	while (current_q ->next != NULL)
	{
		if (current_q->next->next == NULL)
		{
			oneBeforeEnd = current_q;
		}
		current_q = current_q->next;
	}
	oneBeforeEnd->next = NULL;
	delete(current_q);
	current_q = NULL;

}
