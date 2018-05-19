#pragma once
#include <iostream>

struct Node
{
	Node* next;
	Node* previous;
	int value;
};


class List
{
public:
	List() 
	{
		head = nullptr;
		tail = nullptr;
		size = 1;
	}
	~List() {}

	void AddToHead(int element)
	{
		Node* elem = new Node;
		if (!elem)
			throw 1;
		elem->value = element;
		if (head == nullptr)
		{
			head = elem;
			tail = elem;
			head->next = nullptr;
			head->previous = nullptr;
		}
		else
		{
			elem->next = head;
			head = elem;
			elem->previous = nullptr;
		}
		size++;
	}

	void AddToTail(int element)
	{
		Node* elem = new Node;
		elem->value = element;
		if (head == nullptr)
		{
			head = elem;
			tail = elem;
			head->next = nullptr;
			head->previous = nullptr;
		}
		else
		{
			tail->next = elem;
			elem->previous = tail;
			tail = elem;
			tail->next = nullptr;
		}
		size++;
	}

	void DeleteFromHead()
	{
		Node* tmp = head->next;
		if (tmp == nullptr)
			throw 2;
		delete head;
		head = tmp;
		size--;
	}

	void DeleteFromTail()
	{
		Node* temp = head;
		while (temp->next != tail)
			temp = temp->next;
		delete tail;
		tail = temp;
		tail->next = nullptr;
		tail->previous = temp;
		size--;
	}

	void InsertToPosition(int element, int position)
	{
		if (position > size || position < size)
			throw 3;
		Node* elem = new Node;
		elem->value = element;
		Node* temp = head;
		for (int i = 0; i < position - 2; i++)
			temp = temp->next;
		elem->next = temp->next;
		temp->next = elem;
		size++;
	}

	void DeleteByPosition(int position)
	{
		if (position > size || position < size)
			throw 3;
		Node* temp = head;
		for (int i = 0; i < position - 2; i++)
			temp = temp->next;
		delete temp;
		size--;
	}

	void RemoveAll()
	{
		if (head == nullptr)
			throw 4;
		while (head != nullptr)
		{
			DeleteFromHead();
		}
	}

	void Show()
	{
		Node* tmp = head;
		while (tmp != nullptr)
		{
			std::cout << tmp->value << ' ';
			tmp = tmp->next;
		}
	}
private:
	Node*head;
	Node*tail;
	int size;
};

