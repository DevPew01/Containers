#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Stack
{
private:
	char* str;
	int size;
	int top;
public:
	Stack();
	~Stack();
	void push(char str);
	void pop();
	bool isEmpty() const;
	int GetSize() const;
	void Show() const;
	void chek(char* str);
};