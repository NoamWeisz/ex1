#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"
#include "Utlis.h"

/* a positive-integer value stack, with no size limit */
typedef struct Stack
{
	List* _NumsList;
	int _countNode;
} Stack;

void push(Stack* s, unsigned int element);
int pop(Stack* s); // Return -1 if stack is empty

void initStack(Stack* s);
void cleanStack(Stack* s);

bool isEmpty(Stack* s);
bool isFull(Stack* s);
void printList(List* q);

#endif // STACK_H