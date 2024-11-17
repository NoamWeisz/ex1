#include <iostream>
#include "Stack.h"
#include "Utlis.h"
#include "LinkedList.h"

void initStack(Stack *s)
{
	s->_NumsList = new List;
	s->_NumsList->_next = NULL;
	s->_countNode = 0;
}

void cleanStack(Stack* s)
{
	int counter = 0;
	int i = 0;
	List* currentnode = s->_NumsList;
	List* firstnode = s->_NumsList;
	List* next = NULL;
	while (currentnode != NULL)
	{
		currentnode = currentnode->_next;
		counter++;
	}
	for (i = 0;i < counter;i++)
	{
		next = firstnode->_next;
		firstnode->_next = NULL;
		delete(firstnode);
		firstnode = next;
	}
}
void push(Stack* s, unsigned int element)
{
	addNode(s->_NumsList, element);
	s->_countNode++;
}
void reverse(int* nums, unsigned int size)
{

}
int pop(Stack* s)
{
	List* currentnode = s->_NumsList;
	int rNum = 0;
	if (s->_countNode == 0)
	{
		rNum = s->_NumsList->_node;
		delete(s->_NumsList);
		s->_NumsList = NULL;
		s->_countNode--;
		return rNum;
	}
	else if (s->_countNode < 0)
	{
		return -1;
	}
	while (currentnode->_next->_next != NULL)
	{
		currentnode = currentnode->_next;
	}
	rNum = currentnode->_next->_node;
	delete(currentnode->_next);
	currentnode->_next = NULL;
	s->_countNode--;
	return rNum;
	

}
bool isEmpty(Stack* s)
{
	if (!s->_countNode)
	{
		return true;
	}
	return false;
}
bool isFull(Stack* s)
{
	return false;
}
/*
int main()
{
	int nums[10];
	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	nums[4] = 5;
	nums[5] = 6;
	nums[6] = 7;
	nums[7] = 8;
	nums[8] = 9;
	nums[9] = 10;
	reverse(nums, 10);


}
void printList(List* q)
{
	if (q != NULL)
	{
		List* current_q = q;
		while (current_q != NULL)
		{
			printf(" %d ", current_q->node);
			current_q = current_q->next;
		}
	}

	printf("\n");
}
*/