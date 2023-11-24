#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a,n);
	Xuat(a,n);
	cout << "\nCac so duong la: ";
	LietKe(a, n);

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

void LietKe(float a[100], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (a[n - 1] > 0)
		cout << setw(10) << setprecision(3) << a[n - 1];

}