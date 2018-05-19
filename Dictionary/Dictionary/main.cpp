#include "Dictionary.h"


int main()
{
	int size;
	std::cout << "Enter the number of companyes!" << std::endl;
	std::cin >> size;
	std::cin.ignore();
	Company* comp = new Company[size];
	Dictionary dict;
	std::string title, name, phone, adres, eml;

	for (int i = 0; i < size; i++) 
	{
		std::cout << i + 1 << ')' << std::endl;
		std::cout << "Enter the company name: "; getline(std::cin, title);
		std::cout << "Enter the owner name: "; getline(std::cin, name);
		std::cout << "Enter the phone number: "; getline(std::cin, phone);
		std::cout << "Enter the address: "; getline(std::cin, adres);
		std::cout << "Enter the employment: "; getline(std::cin, eml);

		comp[i] = dict.InitCompany(comp[i], title, name, phone, adres, eml);
		dict.Add(comp[i]);
	}
	dict.Show();
	dict.Save();
	std::string srcOwn, srcName, srcphone, SrcEml;
	std::cout << "Enter the company name for search: "; getline(std::cin, srcName);
	dict.SearchByName(srcName);
	std::cout << "Enter the owner name for search: "; getline(std::cin, srcOwn);
	dict.SearchByOwner(srcOwn);
	std::cout << "Enter the phone number for search: "; getline(std::cin, srcphone);
	dict.SearchByPhoneNumber(srcphone);
	std::cout << "Enter the employment: "; getline(std::cin, SrcEml);
	dict.SearchByEmployment(SrcEml);
	dict.Delete();
	dict.Show();
	system("pause");
	return 0;
}