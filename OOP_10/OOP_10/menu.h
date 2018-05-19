#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

class Item
{
private:
	char* name;
public:
	Item()
	{
		name = new char[50];
	}
	~Item() {
		delete[]name;
	}
	void SetItem(char* name) {
		strcpy(this->name, name);
	}
	char* GetItem() {
		return name;
	}
};

class Menu
{
private:
	int current;
	int size;
	Item* arr;
public:

	void outputMenu()
	{
		srand(time(NULL));
		HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coords;
		coords.X = 0;
		coords.Y = 0;
		SetConsoleCursorPosition(hwnd, coords);
		int color = rand() % 15 + 1;
		int color2 = rand() % 15 + 1;
		for (int i = 0; i < size; i++)
		{
			SetConsoleTextAttribute(hwnd, color);
			if (i == current) {
				SetConsoleTextAttribute(hwnd, color2);
				cout << "\t\t______________________________" << endl;
				cout << "\t\t->" << "|  " << arr[i].GetItem() << "    |<-" << endl;
				cout << "\t\t______________________________" << endl;
			}
			else {
				cout << "\t\t______________________________" << endl;
				cout << "\t\t->" << "|  " << arr[i].GetItem() << " |<-" << endl;
				cout << "\t\t______________________________" << endl;
			}
		}
	}

	int ShowMenu()
	{
		outputMenu();
		while (true) {
			switch (_getch())
			{
			case 72:
			{
				system("cls");
				current--;
				outputMenu();
				break;
			}
			case 80:
			{
				system("cls");
				current++;
				outputMenu();
				break;
			}
			case 13:
			{
				return current;
				break;
			}
			}
		}
	}

	Menu()
	{
		arr = new Item[5];
		arr[0].SetItem("      Integer     ");
		arr[1].SetItem("       Float      ");
		arr[2].SetItem("      Double      ");
		arr[3].SetItem("       Char       ");
		arr[4].SetItem("       EXIT       ");
		current = 0;
		size = 5;
	}

	~Menu()
	{
		delete[]arr;
	}
};
