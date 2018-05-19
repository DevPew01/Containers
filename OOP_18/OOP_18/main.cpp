#include "Pet.h"
#include "String.h"

int main()
{
	Pet** pet = new Pet*[4];
	Dog dog;
	dog.SetAge(14);
	dog.SetName("Rex");
	dog.SetSomething("Hungry");

	Cat cat;
	cat.SetAge(4);
	cat.SetName("Kotleta");
	cat.SetSomething("Pushistiy");

	Parrot pop;
	pop.SetAge(1);
	pop.SetName("Lemonad");
	pop.SetSomething("chiric - chiric");

	Hamster ham;
	ham.SetAge(2);
	ham.SetName("Stepa");
	ham.SetSomething("jopa");

	pet[0] = &dog;
	pet[1] = &cat;
	pet[2] = &pop;
	pet[3] = &ham;

	for (int i = 0; i < 4; i++)
	{
		pet[i]->Show();
		cout << endl;
	}

	char* st = nullptr;
	st = new char[80];
	cout << "Enter string:";
	cin.getline(st, 80);
	String str(st);
	String str2;
	cout << "Lenght = " << str.GetStrLen() << endl;
	cout << "You input: " << str.GetStr() << endl;
	str2 = str;
	cout << "Copyed: " << str2.GetStr() << endl;
	if (str == str2)  cout << "Equal\n"; else cout << "Not equal\n";
	if (str != str2)  cout << "Not equal\n"; else cout << "Equal\n";
	str.StrClear();

	char* st2 = nullptr;
	st2 = new char[80];
	cout << "Enter bit string:";
	cin.getline(st2, 80);
	BitString Bstr, Bstr2, Bstr3;
	Bstr.SetStr(st2);
	cout << Bstr.GetStr() << endl;
	cout << Bstr.GetStrLen() << endl;
	Bstr2 = Bstr;
	cout << Bstr.GetStr() << endl;
	Bstr3 + Bstr;
	cout << Bstr3.GetStr() << endl;
	system("pause");
	return 0;
}