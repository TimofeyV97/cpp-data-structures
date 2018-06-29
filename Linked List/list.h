#ifndef LIST_H
#define LIST_H


class List
{
protected:
	int my_value;
	List *my_next;

public:
	List(int value);
	virtual void add_value(int value);
	int get_length();
};

#endif