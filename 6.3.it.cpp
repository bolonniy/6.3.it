#include <iostream>
#include <iomanip> 
#include <time.h>
#include <Windows.h>
using namespace std;


void arr_create(int* arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "¬вед≥ть " << i + 1 << " елемент масива: ";
		cin >> arr[i];
	}
	cout << endl;
}

void arr_out(int* arr, int const size)
{
	cout << "regular: " << endl;
	for (int i = 0; i < size; i++) {

		cout << setw(4) << arr[i];
	}
	cout << endl;
}

// Ўаблони 

template <typename W>
void arr_create(W* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "¬вед≥ть " << i + 1 << " елемент масива: ";
		cin >> arr[i];
	}
	cout << endl;
}

template <typename Q>
void arr_out(Q* arr, const int  size)
{
	cout << "template: " << endl;
	for (int i = 0; i < size; i++) {

		cout << setw(4) << arr[i];
	}

	cout << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 5;
	int a[n];

	arr_create(a, n);
	arr_out(a, n);

	cout << endl;


	arr_create<int>(a, n);
	arr_out<int>(a, n);

	cout << endl;
}
