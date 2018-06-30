#ifndef STACK_H
#define STACK_H

class Stack
{
private:
	int *stack;
	int my_size;
	int sp;

public:
	Stack(int size);
	~Stack();
	void push(int el);
	int pop();
};

#endif