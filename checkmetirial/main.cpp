#include <iostream>
#include <stdio.h>


typedef struct Queue
{
	int* _array;
	int _size;
	int _count;

} Queue;

int main()
{
	Queue* hi = new Queue;
	hi->_array = new int(4);
	hi->_array[0] = 4;
	hi->_array[1] = 4;
	hi->_array[2] = 4;
	hi->_array[3] = 4;
	printf("%d", hi->_array[4]);
}