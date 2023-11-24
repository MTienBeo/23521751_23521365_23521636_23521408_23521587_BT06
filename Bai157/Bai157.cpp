#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
void HoanThienGiam(int [], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	HoanThienGiam(a, n);
	cout << "\nMang sau khi sap xep la: ";
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

bool ktHoanThien(int n)
{
	n = abs(n);
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}

void HoanThienGiam(int a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (ktHoanThien(a[i]) && ktHoanThien(a[n - 1]) && a[i] < a[n - 1])
			swap(a[i], a[n - 1]);
	HoanThienGiam(a, n - 1);

}