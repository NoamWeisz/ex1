#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


typedef struct List
{
	unsigned int node;
	List* next;
}List;

void addNode(List* q, unsigned int value);
void deleteNode(List** q);
void printList(List* q);
#endif