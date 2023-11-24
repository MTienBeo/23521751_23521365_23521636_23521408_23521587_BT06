#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void SapLeTang(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	SapLeTang(a, n);
	cout << "\nMang sau khi sap vi tri le tang: ";
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

void SapLeTang(int a[], int n)
{
	if (n % 2 != 0)
	{
		SapLeTang(a, n - 1);
		return;
	}
	if (n <= 0)
		return;
	for (int i = 1; i <= n - 2; i += 2)
		if (a[i] > a[n - 1])
			swap(a[i], a[n - 1]);
	SapLeTang(a, n - 2);
}