#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

template <typename T>
class Matrix
{
private:
	T** arr;
	int rows;
	int columns;
public:

	Matrix(int rows, int columns)
	{
		arr = new T*[rows];
		for (size_t i = 0; i < rows; i++)
			arr[i] = new T[columns];
	}
	~Matrix()
	{
		for (size_t i = 0; i < rows; i++)
			delete[]arr[i];
		delete[]arr;
	}

	void SetSize(int rows, int columns) {
		this->rows = rows;
		this->columns = columns;
	}

	int GetRows() {
		return rows;
	}

	int GetColumns() {
		return columns;
	}

	void Show() {
		for (size_t i = 0; i < rows; i++) {
			for (size_t j = 0; j < columns; j++) {
				cout << setw(4) << arr[i][j];
			}
			cout << endl;
		}
	}

	void RandSet() {
		for (size_t i = 0; i < rows; i++)
			for (size_t j = 0; j < columns; j++)
				arr[i][j] = (rand() % 200 - 100)*0.10;
	}

	void SetMatrix() {
		for (size_t i = 0; i < rows; i++)
			for (size_t j = 0; j < columns; j++)
				cin >> arr[i][j];
	}

	Matrix& operator+(Matrix& obj) {
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < columns; j++)
				this->arr[i][j] += obj.arr[i][j];
		return *this;
	}

	Matrix& operator-(Matrix& obj) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				this->arr[i][j] -= obj.arr[i][j];
			}
		}
		return *this;
	}

	Matrix& operator*(Matrix& obj) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				this->arr[i][j] *= obj.arr[i][j];
			}
		}
		return *this;
	}

	Matrix& operator/(Matrix& obj) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				this->arr[i][j] = arr[i][j] / obj.arr[i][j];
			}
		}
		return *this;
	}

	Matrix& operator=(Matrix& obj) {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				this->arr[i][j] = obj.arr[i][j];
			}
		}
		return *this;
	}
};