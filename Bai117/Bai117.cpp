#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float CuoiCung(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo am cuoi cung lon hon -1 la: " << CuoiCung(a, n);
	return 0;
}

void Nhap(float a[100], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a" << i << ": ";
		cin >> a[i];
	}
}

void Xuat(float a[100], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

float CuoiCung(float a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1]<0 && a[n - 1]>-1)
		return a[n - 1];
	return CuoiCung(a, n - 1);
}