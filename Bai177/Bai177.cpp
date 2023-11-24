#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void DuaVeCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	DuaVeCuoi(a, n);
	cout << "Mang sau khi sap la: ";
	Xuat(a, n);
}

void Nhap(int a[100], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a" << i << ": ";
		cin >> a[i];
	}
}

void Xuat(int a[100], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

bool ktNguyenTo(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

void DuaVeCuoi(int a[], int n)
{
	if (n == 0)
		return;
	if (ktNguyenTo(a[n - 1]))
	{
		DuaVeCuoi(a, n - 1);
		return;
	}
	for (int i = 0; i <= n - 2; i++)
		if (ktNguyenTo(a[i]))
		{
			swap(a[n - 1], a[i]);
			break;
		}
	DuaVeCuoi(a, n - 1);
}
