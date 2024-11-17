
#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
#include "Utlis.h"

//main function in order to check my code.

int main()
{
	int* array = NULL;
	array =	reverse10();
	for (int y = 0; y < 10;y++)
	{
		std::cout << "index number: " << y << ": is " << array[y] << std::endl;
	}
	delete(array);
	int i = 0;
	Stack* check = new Stack;
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
	int currentNum = 0;
	initStack(check);
	check->_NumsList->_node = nums[0];
	for (i = 1;i < (10);i++)
	{
		push(check, nums[i]);
	}
	std::cout << std::endl;
	printList(check->_NumsList);
	cleanStack(check);
	delete(check);
}
//printList function to check the stack and print it.
void printList(List* s)
{
	if (s != NULL)
	{
		List* current_s = s;
		while (current_s != NULL)
		{
			std::cout << current_s->_node << " ";
			current_s = current_s->_next;
		}
	}

}
