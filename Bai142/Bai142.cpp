#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktTonTai(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	if (ktTonTai(a, n) == 0)
		cout << "Khong ton tai";
	else
		cout << "Ton tai";
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

int ktTonTai(int a[], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] % 2 == 0)
		return 1;
	return ktTonTai(a, n - 1);
}