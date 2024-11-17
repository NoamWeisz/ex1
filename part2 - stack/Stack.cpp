#include <iostream>
#include "Stack.h"
#include "Utlis.h"
#include "LinkedList.h"

//initStack set new stack
void initStack(Stack *s)
{
	s->_NumsList = new List;
	s->_NumsList->_next = NULL;
	s->_countNode = 0;
}
//cleanStack clean all the memory inside the stack, but not the stack itself

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

//push add to the stack new node

void push(Stack* s, unsigned int element)
{
	addNode(s->_NumsList, element);
	s->_countNode++;
}

//reverse is function that get array and make it reversed

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	int y = 0;
	int currentNum = 0;
	Stack* Rstack = new Stack;
	initStack(Rstack);
	Rstack->_NumsList->_node = nums[0];
	for (i = 1;i < (size);i++)
	{
		push(Rstack, nums[i]);
	}

	for (y = 0;y < size;y++)
	{
		currentNum = pop(Rstack);

		nums[y] = currentNum;
	}
	cleanStack(Rstack);
	delete(Rstack);

}

//reverse10 is function that set new array with in size of 10 and reverse the array 

int* reverse10()
{
	int* nums = new int[10];
	unsigned int curNum = 0;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		std::cout << "enter num number " << (i + 1) << " ";
		std::cin >> curNum;
		nums[i] = curNum;
	}
	reverse(nums, 10);
	return nums;
}
//pop is function that remove the last node in the stack
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

//isEmpty is function that check if the stack is empty

bool isEmpty(Stack* s)
{
	if (!s->_countNode)
	{
		return true;
	}
	return false;
}
//isFull is function that check if the stack is full

bool isFull(Stack* s)
{
	return false;
}
