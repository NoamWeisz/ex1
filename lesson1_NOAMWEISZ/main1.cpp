
#include "Queue.h"
#include <iostream>


int main()
{
	Queue *arr = new Queue;
	int num = 0;
	int flag = 1;
	int element = 0;
	unsigned int size = 0;
	while (flag)
	{	
		std::cout << "1- create queue\n 2 - clean queue \n 3- input elemnt\n 4- print queue\n 5- remove 1 index\n 6 - check if empty\n 7 - check if full" << std::endl;
		std::cin >> num;
		if (num == 1)
		{
			std::cout << "enter size" << std::endl;
			std::cin >> size;
			initQueue(arr, size);

		}
		if (num == 2)
		{
			cleanQueue(arr);
		}
		if (num == 3)
		{
			std::cout << "enter element" << std::endl;
			std::cin >> element;
			enqueue(arr, element);
		}
		if (num == 4)
		{
			int i = 0;
			for (i = 0;i < (arr->_count);i++)
			{
				std::cout <<" " << arr->_array[i];
			}
			std::cout << ""  << std::endl;
		}
		if (num == 5)
		{
			dequeue(arr);
		}
		if (num == 6)
		{
			printf("\n Check %d\n", isEmpty(arr));
		}
		if (num == 7)
		{
			printf("\n check full %d\n", isFull(arr));
		}
	}

}
