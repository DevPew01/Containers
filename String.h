#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class String
{
public:
	String();
	String(char* str);
	String(String& obj);
	char* GetStr() const;
	String& operator=(String& obj);
	String& operator+=(String& obj);
	bool operator==(String& obj1);
	bool operator!=(String& obj);
	int GetStrLen();
	void StrClear();
	String& operator+(String& obj);
	~String();
protected: 
	char* str;
};

class BitString: public String
{
public:
	BitString();
	BitString(char* str);
	BitString(BitString& obj);
	~BitString();
    friend BitString& operator+(BitString& object, BitString& object2);
	BitString& operator+=(BitString&);
	void SetStr(char* str);
private:
	
};