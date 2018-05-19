#include "Matrix.h"
#include "conio.h"

int main() {
	srand(time(NULL));
	int n, m;
	cout << "Enter the size:"; cin >> n >> m;
	Matrix<int> M(n, m);
	Matrix<int> M2(n, m);
	Matrix<int> Mrez(n, m);
	M.SetSize(n, m);
	M.RandSet();
	M.Show();
	cout << '\n';
	M2.SetSize(n, m);
	M2.RandSet();
	M2.Show();
	cout << '\n';
	Mrez.SetSize(n, m);
	cout << "+, -, *, /\nexit - 0";
	while (true)
	{
		switch (_getch()) {
		case '+':
			Mrez = M + M2;
			cout << "Summ:" << endl;
			Mrez.Show();
			break;
		case '-':
			cout << "Difference:" << endl;
			Mrez = M - M2;
			Mrez.Show();
			break;
		case '*':
			cout << "Multiple:" << endl;
			Mrez = M * M2;
			Mrez.Show();
			break;
		case '/':
			cout << "Division:" << endl;
			Mrez = M / M2;
			Mrez.Show();
			break;
		case'0':
			exit(0);
		}
	}
	system("pause");
	return 0;
}