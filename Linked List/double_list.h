#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H
#include "list.h"

class Double_list : public List
{
private:
	Double_list *my_previous;

public:
	Double_list(int value);
	void add_value(int value);
};

#endif