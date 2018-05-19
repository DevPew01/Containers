#include "Stack.h"

Stack::Stack()
{
	size = 20;
	str = new char[size];
	top = 0;
}

Stack::~Stack()
{
	delete[]str;
}

void Stack::push(char str)
{
	this->str[top++] = str;
}

void Stack::pop()
{
	str[--top];
}

bool Stack::isEmpty() const
{
	return (str == nullptr) ? true : false;
}

int Stack::GetSize() const
{
	return size;
}

void Stack::Show() const
{
	for (int i = 0; i < size; i++)
		cout << str[i];
}