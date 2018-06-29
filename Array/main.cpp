#include <iostream>
#include "array.h"


using namespace std;



int main()
{
	Array a(5);

	a.set_data(0, 5);
	a.set_data(1, 6);
	a.set_data(2, 125);
	a.set_data(3, 7);
	a.set_data(15, 10);
	a.set_data(4, 15);

	for (int i = 0; i < a.get_size(); i++)
		cout << a.get_data(i) << endl;

	cout << a.get_data(10) << endl;

	return 0;
}