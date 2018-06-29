#include <iostream>
#include "queue.h"


using namespace std;


Queue::Queue(int size)
{
	my_size = size;
	queue = new int [my_size];
	tail = head = 0;
}


Queue::~Queue()
{
	delete [] queue;
}


void Queue::push(int el)
{
	queue[tail] = el;
	tail++;

	if (tail > my_size)
		tail = 0;
}


int Queue::pop()
{
	if (head > my_size)
		head = 0;

	if (head == tail)
	{
		cout << "Queue is empty" << endl;
		return -1;
	}
	else
		return queue[head++];
}