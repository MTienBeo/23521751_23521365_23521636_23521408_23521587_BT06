#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(int [], int&);
void Xuat(int [], int);
void LietKe(int [], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nCac gia tri chan: ";
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}