#include"stack.h"

void main()
{
	int size,x;
	stack s1;
	cout << "enter size of stack:: ";
	cin >> size;
	s1.accept(size);
	int j;
	for (j = 0; j <= size; j++)
	{
		cout << "Enter num to push:: ";
		cin >> x;
		cout << "\n";
		s1.push(x);
	}

	s1.peek();
	s1.display();

	s1.pop();
	s1.display();

	s1.popall();
	s1.display();

	_getch();
}