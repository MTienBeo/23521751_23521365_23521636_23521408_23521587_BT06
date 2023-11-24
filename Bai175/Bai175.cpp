#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void MotVeDau(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	MotVeDau(a, n);
	cout << "\nMang sau khi dua so 1 ve dau: ";
	Xuat(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

void MotVeDau(int a[], int n)
{
	if (n == 1)
		return;
	if (a[n - 1] != 1)
		MotVeDau(a, n - 1);
	else 
		swap(a[0], a[n - 1]);
}