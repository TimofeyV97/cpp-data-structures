#include <cstddef>
#include <iostream>
#include "list.h"

using namespace std;


List::List(int value)
{
	my_value = value;
	my_next = 0;
}


void List::add_value(int value)
{
	List *current = this;

	while (current->my_next != NULL)
		current = current->my_next;

	current->my_next = new List(value);
}


int List::get_length()
{
	int counter = 0;

	for (List *current = this; current != NULL; current = current->my_next)
		counter++;

	return counter;
}