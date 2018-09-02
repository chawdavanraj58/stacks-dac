#include<iostream>
#include<conio.h>
using namespace std;


class stack
{
private:
	int *arr;
	int top;
	int capacity;
public:
	stack();
	void push(int);
	int pop();
	void peek();
	bool isFull();
	bool isEmpty();
	void accept(int);
	void display();
	void popall();
};