/*
#include "Queue.h"
#include <iostream>
#include <stdio.h>

int main()
{
	Queue *arr = new Queue;
	int num = 0;
	int flag = 1;
	int element = 0;
	unsigned int size = 0;
	while (flag)
	{	
		printf("1- create tour\n 2 - clean tour \n 3- input elemnt");
		std::cin >> num;
		if (num == 1)
		{

			printf("enter size");
			std::cin >> size;
			initQueue(arr, size);

		}
		if (num == 2)
		{
			cleanQueue(arr);
		}
		if (num == 3)
		{
			printf("enter element");
			std::cin >> element;
			enqueue(arr, element);
		}
		if (num == 4)
		{
			int i = 0;
			for (i = 0;i <= arr->_count;i++)
			{
				printf("%d", arr[i]);
			}
		}
		if (num == 5)
		{
			printQueue(arr);
		}
		if (num == 6)
		{
			dequeue(arr);
		}
		if (num == 7)
		{
			printf("\n Check %d\n", isEmpty(arr));
		}
		if (num == 8)
		{
			printf("\n check full %d\n", isFull(arr));
		}
	}

}
*/