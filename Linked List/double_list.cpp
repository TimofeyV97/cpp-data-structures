#include <cstddef>
#include "double_list.h"

Double_list::Double_list(int value) : List(value)
{
	my_previous = NULL;
}

void Double_list::add_value(int value)
{
	Double_list *current = this;

	while (current->my_next != NULL)
		current = (Double_list *) current->my_next;

	current->my_next = new Double_list(value);
	((Double_list *) current->my_next)->my_previous = current;
}