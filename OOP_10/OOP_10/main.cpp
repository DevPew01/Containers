#include "menu.h"

//шаблонные функции для поиска максимума, минимума, сортировки массива, двоичного поиска в массиве, замены элемента массива на переданное значение.

template <typename T>
T MaxofArr(T *arr, int size) {
	T max = FLT_MIN;
	for (size_t i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

template <typename T>
T MinofArr(T *arr, int size) {
	T min = FLT_MAX;
	for (size_t i = 0; i < size; i++) 
		if (arr[i] < min)
			min = arr[i];
	return min;
}

template <typename T>
T* GetArr(T*arr, int size) {
	for (size_t i = 0; i < size; i++) {
		arr[i] = (rand() % 100) * 0.1;
	}
	return arr;
}

template <typename T>
T* SortArr(T* arr, int size) {
	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size - 1; j++)
			if (arr[j] > arr[i])
			swap(arr[j], arr[i]);
	return arr;
}

template <typename T>
T* InsertPos(T* arr, int size, int index, T value) {
	for (size_t i = 0; i < size; i++)
		if (i == index)
			arr[i] = value;
	return arr;
}

template <typename T>
void PrintArr(T* arr, int size) {
	for (size_t i = 0; i < size; i++)
		cout << '[' << i << ']' << arr[i] << ' ';
	cout << "\n";
}

template <typename T>
T BinarySearch(T*arr, int size, T value) {
	int left = 0;
	int right = size;

	while (true)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == value)
			return mid;

		if (arr[mid] > value)
			right = mid;
		else
			left = mid + 1;
	}
}

int main() {
	int size = 0;
	cout << "Enter the array size:"; cin >> size;
	
	Menu me;
	while (true) {
		switch (me.ShowMenu()) {
		case 0:{
			int* arr = new int[size];
			arr = GetArr(arr, size);
			PrintArr(arr, size);
			int maxI = MaxofArr(arr, size);
			int minI = MinofArr(arr, size);
			cout << "\nMaximal = " << maxI << endl;
			cout << "Minimal = " << minI << endl;
			arr = SortArr(arr, size);
			cout << "Sorted:";
			PrintArr(arr, size);
			int indI, valI;
			cout << "Enter index:"; cin >> indI;
			cout << "Enter value:"; cin >> valI;
			arr = InsertPos<int>(arr, size, indI, valI);
			PrintArr(arr, size);
			int find, value;
			cout << "Enter the value for search:" << endl; cin >> value;
			find = BinarySearch<int>(arr, size, value);
			cout << "Value index" << '[' << find << ']' << endl;
			break;
		}
		case 1: {
			float*arr2 = new float[size];
			arr2 = GetArr(arr2, size);
			float maxF = MaxofArr(arr2, size);
			float minF = MinofArr(arr2, size);
			cout << "\nMaximal = " << maxF << endl;
			cout << "Minimal = " << minF << endl;
			arr2 = SortArr(arr2, size);
			cout << "Sorted:";
			PrintArr(arr2, size);
			int indF; float valF;
			cout << "Enter index:"; cin >> indF;
			cout << "Enter value:"; cin >> valF;
			arr2 = InsertPos<float>(arr2, size, indF, valF);
			PrintArr(arr2, size);
			int findF; float valueF;
			cout << "Enter the value for search:" << endl; cin >> valueF;
			findF = BinarySearch<float>(arr2, size, valueF);
			cout << "Value find index" << '[' << findF << ']' << endl;
			break;
		}
		case 2: {
			double *arr3 = new double[size];
			arr3 = GetArr(arr3, size);
			double maxD = MaxofArr(arr3, size);
			double minD = MinofArr(arr3, size);
			cout << "\nMaximal = " << maxD << endl;
			cout << "Minimal = " << minD << endl;
			arr3 = SortArr(arr3, size);
			cout << "Sorted:";
			PrintArr(arr3, size);
			int indD;
			double valD;
			system("pause");
			cout << "Enter index:"; cin >> indD;
			cout << "Enter value:"; cin >> valD;
			arr3 = InsertPos<double>(arr3, size, indD, valD);
			PrintArr(arr3, size);
			int findD; double valueD;
			cout << "Enter the value for search:" << endl; cin >> valueD;
			findD = BinarySearch<double>(arr3, size, valueD);
			cout << "Value find index" << '[' << findD << ']' << endl;
			break;
		}
		case 3: {
			char* arr4 = new char[size];
			arr4 = GetArr(arr4, size);
			int maxC = MaxofArr(arr4, size);
			int minC = MinofArr(arr4, size);
			cout << "\nMaximal = " << maxC << endl;
			cout << "Minimal = " << minC << endl;
			arr4 = SortArr(arr4, size);
			cout << "Sorted:";
			PrintArr(arr4, size);
			int indC; char ch;
			cout << "Enter index:"; cin >> indC;
			cout << "Enter value:"; cin >> ch;
			arr4 = InsertPos<char>(arr4, size, indC, ch);
			PrintArr(arr4, size);
			int findC; char valueC;
			cout << "Enter the value for search:" << endl; cin >> valueC;
			findC = BinarySearch<char>(arr4, size, valueC);
			cout << "Value find index" << '[' << findC << ']' << endl;
			break;
		}
		case 4:
			exit(0);
		}
	}
	system("pause");
	return 0;
}