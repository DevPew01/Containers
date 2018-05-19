#include "List.h"

int main()
{
	List obj;
	try
	{
		obj.AddToHead(23);
	}
	catch (int error)
	{
		if (error == 1)
			std::cout << "Memory allocation error!" << std::endl;
	}
	obj.AddToTail(24);
	//obj.AddToTail(30);
	obj.DeleteFromHead(); //Чтобы увидеть исключение

	try 
	{
		obj.DeleteFromHead();
	}
	catch (int error)
	{
		if (error == 2)
			std::cout << "Head was nullptr!" << std::endl;
	}
	//obj.DeleteFromTail();
	try
	{
		obj.InsertToPosition(25, 0); // exeption
	}
	catch (int error)
	{
		if (error == 3)
		{
			std::cout << "False position!" << std::endl;
		}
	}
	try
	{
		obj.DeleteByPosition(4); //exeption
	}
	catch (int error)
	{
		if (error == 3)
		{
			std::cout << "False position!" << std::endl;
		}
	}
	try 
	{
		obj.RemoveAll();
	}
	catch (int error)
	{
		if (error == 4)
		{
			std::cout << "Exeption!" << std::endl;
		}
	}
	obj.Show();
	system("pause");
	return 0;
}