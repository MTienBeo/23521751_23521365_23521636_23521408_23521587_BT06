#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TimGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nGia tri dau tien lon hon 2003 la: " << TimGiaTri(a, n);
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

float TimGiaTri(float a[100], int n)
{
	if (n == 0)
		return 0;
	float lc = TimGiaTri(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 2003)
		return a[n - 1];
	return 0;
}