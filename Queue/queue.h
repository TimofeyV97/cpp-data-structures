#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
private:
	int *queue;
	int my_size;
	int head;
	int tail;

public:
	Queue(int size);
	~Queue();
	void push(int el);
	int pop();
};

#endif