
#include "Queue.h"
#include <iostream>


//initQueue set a new queue
void initQueue(Queue* q, unsigned int size)
{
	q->_count = 0;
	q->_size = size;
	q->_array = new int[size];
}
//cleanQueue relese the memory in the heap
void cleanQueue(Queue* q)
{
	if (q->_array != nullptr) 
{
		delete[] q->_array; 
		q->_array = nullptr; 
	}
}
//enqueue set new index with new value in the queue
void enqueue(Queue* q, unsigned int newValue)
{
	q->_array[q->_count] = newValue;
	q->_count++;
}

//dequeue remove the first index from the queue

int dequeue(Queue* q)
{
	int i = 0;
	int firstIndex = 0;
	firstIndex = q->_array[0];
	for (i = 0;i < q->_count;i++)
	{
		q->_array[i] = q->_array[i + 1];
	}
	q->_count--;
	return firstIndex;
}

//isEmpty check if the queue is empty

bool isEmpty(Queue* s)
{

	if (s->_count == 0)
	{
		return true;
	}
	return false;
}

//isFull check if the queue is full

bool isFull(Queue* s)
{
	if (s->_count == s->_size)
	{
		return true;
	}
	return false;
}

