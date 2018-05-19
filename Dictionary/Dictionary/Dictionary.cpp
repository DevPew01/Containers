#include "Dictionary.h"



Dictionary::Dictionary() {}

Dictionary::~Dictionary()
{
	list.shrink_to_fit();
}

void Dictionary::Add(Company comp)
{
	list.push_front(comp);
}

void Dictionary::Delete()
{
	list.pop_front();
}

void Dictionary::Show()
{
	system("cls");
	for (auto it = list.begin(); it != list.end(); it++)
	{
		std::cout<<"Company: " << it->CompanyName << std::endl;
		std::cout<<"Owner: " << it->OwnerName << std::endl;
		std::cout<<"Phone:" << it->PhoneNumber << std::endl;
		std::cout <<"Address: " << it->address << std::endl;
		std::cout <<"Employment: "<< it->Employment << std::endl;
		std::cout << std::endl;
	}
}

void Dictionary::Save()
{
	std::fstream file;
	file.open("Companyes.txt", std::ios_base::out);
	file.clear();
	for (auto it = list.begin(); it != list.end(); it++)
	{
		file << "Company: " << it->CompanyName << std::endl;
		file << "Owner: " << it->OwnerName << std::endl;
		file << "Phone:" << it->PhoneNumber << std::endl;
		file << "Address: " << it->address << std::endl;
		file << "Employment: " << it->Employment << std::endl;
		file << std::endl;
	}
	file.close();
}

Company Dictionary::InitCompany(Company comp, std::string Name, std::string Owner, std::string Phone, std::string address, std::string Empl)
{
	comp.CompanyName = Name;
	comp.OwnerName = Owner;
	comp.PhoneNumber = Phone;
	comp.address = address;
	comp.Employment = Empl;
	return comp;
}

void Dictionary::SearchByOwner(std::string OwnerName)
{
	for (auto it = list.begin(); it != list.end(); it++)
		if (it->OwnerName == OwnerName)
		{
			std::cout << "Company: " << it->CompanyName << std::endl;
			std::cout << "Owner: " << it->OwnerName << std::endl;
			std::cout << "Phone:" << it->PhoneNumber << std::endl;
			std::cout << "Address: " << it->address << std::endl;
			std::cout << "Employment: " << it->Employment << std::endl;
			std::cout << std::endl;
		}
}

void Dictionary::SearchByName(std::string Name)
{
	for (auto it = list.begin(); it != list.end(); it++)
		if (it->CompanyName == Name)
		{
			std::cout << "Company: " << it->CompanyName << std::endl;
			std::cout << "Owner: " << it->OwnerName << std::endl;
			std::cout << "Phone:" << it->PhoneNumber << std::endl;
			std::cout << "Address: " << it->address << std::endl;
			std::cout << "Employment: " << it->Employment << std::endl;
			std::cout << std::endl;
		}
}

void Dictionary::SearchByPhoneNumber(std::string Number)
{
	for (auto it = list.begin(); it != list.end(); it++)
		if (it->PhoneNumber == Number)
		{
			std::cout << "Company: " << it->CompanyName << std::endl;
			std::cout << "Owner: " << it->OwnerName << std::endl;
			std::cout << "Phone:" << it->PhoneNumber << std::endl;
			std::cout << "Address: " << it->address << std::endl;
			std::cout << "Employment: " << it->Employment << std::endl;
			std::cout << std::endl;
		}
}

void Dictionary::SearchByEmployment(std::string Employment)
{
	for (auto it = list.begin(); it != list.end(); it++)
		if (it->Employment == Employment)
		{
			std::cout << "Company: " << it->CompanyName << std::endl;
			std::cout << "Owner: " << it->OwnerName << std::endl;
			std::cout << "Phone:" << it->PhoneNumber << std::endl;
			std::cout << "Address: " << it->address << std::endl;
			std::cout << "Employment: " << it->Employment << std::endl;
			std::cout << std::endl;
		}
}
