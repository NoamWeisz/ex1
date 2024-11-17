#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
#include "Utlis.h"

int main()
{
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
	
	printList(check->_NumsList);

}
void printList(List* s)
{
	if (s != NULL)
	{
		List* current_s = s;
		while (current_s != NULL)
		{
			printf(" %d ", current_s->_node);
			current_s = current_s->_next;
		}
	}

	printf("\n");
}