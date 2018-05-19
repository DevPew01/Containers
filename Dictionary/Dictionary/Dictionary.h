#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <deque>

struct Company
{
	std::string CompanyName;
	std::string OwnerName;
	std::string PhoneNumber;
	std::string address;
	std::string Employment;
};

class Dictionary
{
public:
	Dictionary();
	~Dictionary();
	void Add(Company comp);
	void Delete();
	void Show();
	void Save();
	Company InitCompany(Company comp, std::string Name, std::string Owner, std::string Phone, std::string address, std::string Empl);
	void SearchByOwner(std::string OwnerName);
	void SearchByName(std::string Name);
	void SearchByPhoneNumber(std::string Number);
	void SearchByEmployment(std::string Employment);
	
private:
	Company company;
	std::deque<Company>list;
};