#include"stack.h"

stack::stack()
{
	this->arr = NULL;
	this->top = -1;
	this->capacity = 0;
}

void stack::accept(int size)
{
	arr = new int[size];
	this->capacity = size;
}

void stack::push(int x)
{
	if (isFull())
	{
		cout << "\n       stack overflow";
	}
	else
	{
		++top;
		arr[top] = x;
	}
}

int stack::pop()
{
	if (isEmpty())
	{
		cout << "\n Stack underflow";
	}
	else
	{
		top--;
		return top;
		this->capacity--;
	}
}

void stack::popall()
{
	int i;
	for (i = 0; i <= capacity - 1; i++)
	{
		if (isEmpty())
		{
			cout << "\n Stack underflow";
		}
		else
		{
			cout<<"\n popped item is::"<<arr[top];
			top--;
		}
	}
}

void stack::peek()
{
	cout << "\n\n top is:" << arr[top];
}

bool stack::isFull()
{
	if (top == capacity - 1)
		return 1;
	else
		return 0;
}

bool stack::isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void stack::display()
{
	int i;
	cout << "\n\n Stack is: \n";
		for(i = 0; i <= top; i++)
		{
			cout << arr[i] <<"  ";
		}
}