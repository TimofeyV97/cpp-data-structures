#ifndef ARRAY_H_
#define ARRAY_H_
#include <cstddef>

class Array
{
private:
	size_t my_size;
	int *my_data;

public:
	Array(size_t size);
	Array(const Array &a);
	~Array();
	void set_data(int i, int val);
	int get_data(int i) const;
	size_t get_size() const;
	void print_array();
	const Array& operator=(const Array &a);
};

#endif