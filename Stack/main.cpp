#include <iostream>
#include "stack.h"


using namespace std;



int main()
{
	Stack s(3);

	s.push(5);
	s.push(6);
	s.push(50);
	s.push(51);

	cout << s.pop() << endl;
	cout << s.pop() << endl;

	s.push(100);

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	return 0;
}