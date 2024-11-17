#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct List
{
	unsigned int _node;
	List* _next;
}List;

void addNode(List* s, unsigned int value);
void deleteNode(List* s);
void printList(List* s);
#endif