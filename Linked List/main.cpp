#include <iostream>
#include "double_list.h"


using namespace std;



int main()
{
	List l(5);
	Double_list dl(6);

	l.add_value(10);
	dl.add_value(50);
	dl.add_value(150);

	cout << l.get_length() << endl;
	cout << dl.get_length() << endl;

	return 0;
}