#include "LinkedList.h"
#include <iostream>
#include <stdio.h>




void addNode(List* s,unsigned int value)
{
	List *current_s = NULL;
	current_s = s;
	while (current_s->_next != NULL)
	{
		current_s = current_s->_next;
	}
	current_s->_next = new List;
	current_s->_next->_node = value;
	current_s->_next->_next = NULL;
}
void deleteNode(List* s)
{
	List* current_s = s;
	List* oneBeforeEnd = s;
	while (current_s ->_next != NULL)
	{
		if (current_s->_next->_next == NULL)
		{
			oneBeforeEnd = current_s;
		}
		current_s = current_s->_next;
	}
	oneBeforeEnd->_next = NULL;
	delete(current_s);
	current_s = NULL;

}
