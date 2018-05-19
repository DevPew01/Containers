#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pet
{
public:
	Pet() {}
	virtual ~Pet() {}
	virtual void Sound() {};
	virtual void Show() {};
	virtual void Type() {};
protected:
	int age;
	string Name;
	string something;
	string voice;
};

class Dog : public Pet
{
public:
	Dog()
	{

	}
	~Dog() {}

	void SetName(string Name)
	{
		this->Name = Name;
	}

	void SetAge(int age)
	{
		this->age = age;
	}

	void SetSomething(string some)
	{
		this->something = some;
	}

	void Show()
	{
		cout << Name << endl;
		cout << age << endl;
		cout << something << endl;
	}

	void Sound()
	{
		cout << voice << endl;
	}

	void Type(string type)
	{
		cout << type << endl;
	}
private:

};

class Cat : public Pet
{
public:
	Cat() {}
	~Cat() {}

	void SetName(string Name)
	{
		this->Name = Name;
	}

	void SetAge(int age)
	{
		this->age = age;
	}

	void SetSomething(string some)
	{
		this->something = some;
	}

	void Show()
	{
		cout << Name << endl;
		cout << age << endl;
		cout << something << endl;
	}

	void Sound()
	{
		cout << voice << endl;
	}

	void Type(string type)
	{
		cout << type << endl;
	}
private:

};

class Parrot : public Pet
{
public:
	Parrot() {}
	~Parrot() {}
	void SetName(string Name)
	{
		this->Name = Name;
	}

	void SetAge(int age)
	{
		this->age = age;
	}

	void SetSomething(string some)
	{
		this->something = some;
	}

	void Show()
	{
		cout << Name << endl;
		cout << age << endl;
		cout << something << endl;
	}

	void Sound()
	{
		cout << voice << endl;
	}

	void Type(string type)
	{
		cout << type << endl;
	}
private:

};

class Hamster : public Pet
{
public:
	Hamster() {};
	~Hamster() {};
	void SetName(string Name)
	{
		this->Name = Name;
	}

	void SetAge(int age)
	{
		this->age = age;
	}

	void SetSomething(string some)
	{
		this->something = some;
	}

	void Show()
	{
		cout << Name << endl;
		cout << age << endl;
		cout << something << endl;
	}

	void Sound()
	{
		cout << voice << endl;
	}

	void Type(string type)
	{
		cout << type << endl;
	}
private:

};
