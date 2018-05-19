#include "String.h"
#include <bitset>

String::String() 
{
	str = new char[80];
}

String::String(char * str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}

String::String(String & obj)
{
	strcpy(this->str, obj.str);
}

char * String::GetStr() const
{
	return str;
}

String & String::operator=(String & obj)
{
	delete[] this->str;
	this->str = new char[strlen(obj.str) + 1];
	strcpy(this->str, obj.str);
	return *this;
}

String & String::operator+=(String & obj)
{
	int size = strlen(this->str) + strlen(obj.str);
	char* newStr = new char[size + 1];
	for (int i = 0; this->str != '\0'; i++)
		obj.str[i] = this->str[i];
	for (int j = strlen(this->str), k = 0; j <= size; j++, k++)
		newStr[j] = obj.str[k];
	delete this->str;
	this->str = newStr;
	return *this;
}

int String::GetStrLen()
{
	int lenght = 0;
	for (int i = 0; this->str[i] != '\0'; i++)
	{
		lenght++;
	}
	return lenght;
}

void String::StrClear()
{
	delete[]this->str;
	this->str = new char[80];
}

String & String::operator+(String& obj)
{
	int size = strlen(this->str) + strlen(obj.str);
	char* newStr = new char[size + 1];
	for (int i = 0; i < size+1; i++)
	{
		newStr[i] = this->str[i] + obj.str[i];
	}
	delete[]this->str;
	this->str = newStr;
	return *this;
}

String::~String()
{
	delete[]str;
}

bool String::operator==(String & obj1)
{
	return !strcmp(this->str, obj1.str);
}

bool String::operator!=(String & obj1)
{
	return strcmp(this->str, obj1.str);
}

BitString::BitString() {}

BitString::BitString(char * str)
{
	strcpy(this->str, str);
}

BitString::BitString(BitString & obj)
{
	strcpy(this->str, obj.str);
}

BitString::~BitString()
{
}


void BitString::SetStr(char* str)
{
	
	for (int i = 0; i < strlen(str); i++)
		if (str[i] != '1' && str[i] != '0')
		{
			cout << "Incorrect input!" << endl;
			exit(0);
		}
		else
		{
			strcpy(this->str, str);
		}
}

BitString& BitString::operator+=(BitString& obj)
{
	int size = strlen(this->str) + strlen(obj.str);
	char* NewStr = new char[size + 1];
	for (int i = 0; i < strlen(this->str); i++)
		NewStr[i] = this->str[i];
	for (int j = strlen(this->str), k = 0; j <= size; j++, k++)
		NewStr[j] = obj.str[k];
	delete this->str;
	this->str = NewStr;
	return *this;
}

BitString & operator+(BitString & object, BitString & object2)
{
	BitString ts = object;
	return ts += object2;
}
