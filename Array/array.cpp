#include <iostream>
#include "array.h"

using namespace std;


Array::Array(size_t size)
{
	my_size = size;
	my_data = new int [size];
}


Array::Array(const Array &a)
{
	my_size = a.my_size;
	my_data = new int [my_size];

	for (int i = 0; i < my_size; i++)
		my_data[i] = a.my_data[i];
}


Array::~Array()
{
	delete [] my_data;
}


void Array::set_data(int i, int val)
{
	if (i < 0 || i > (my_size - 1))
		return;

	my_data[i] = val;
}


int Array::get_data(int i) const
{
	if (i < 0 || i > (my_size - 1))
		return -1;

	return my_data[i];
}


size_t Array::get_size() const
{
	return my_size;
}


void Array::print_array()
{
	for (int i = 0; i < get_size(); i++)
		cout << my_data[i] << " ";

	cout << endl;
}


const Array& Array::operator=(const Array &a)
{
	if (this != &a)
	{
		my_size = a.my_size;
		delete [] my_data;
		my_data = new int [my_size];

		for (int i = 0; i < my_size; i++)
			my_data[i] = a.my_data[i];
	}

	return *this;
}