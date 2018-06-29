#include <iostream>
#include "queue.h"


using namespace std;



int main()
{
	Queue q(3);

	q.push(5);
	q.push(6);
	q.push(50);

	cout << q.pop() << endl;
	cout << q.pop() << endl;

	q.push(100);
	q.push(150);

	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;

	return 0;
}