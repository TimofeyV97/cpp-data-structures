#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(int size)
{
	my_size = size;
	stack = new int [my_size];
	sp = 0;
}

Stack::~Stack()
{
	delete [] stack;
}

void Stack::push(int el)
{
	if (sp == my_size)
		cout << el << ": Stack is full" << endl;
	else
	{
		stack[sp] = el;
		sp++;
	}
}

int Stack::pop()
{
	if (sp == 0)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	else
		return stack[--sp];
}