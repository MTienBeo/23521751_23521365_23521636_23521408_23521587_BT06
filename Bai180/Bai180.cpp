#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatBo2(float, float);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nCac bo 2 trong mang: ";
	LietKe(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << fixed << setprecision(2) << setw(6) << a[i];
}

void XuatBo2(float x , float y)
{
	cout << setprecision(2) << setw(10) << "(" << x << ";" << y << ")";
}

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	LietKe(a, n - 1);
	for (int i = 0; i < n - 1; i++)
	{
		XuatBo2(a[n - 1], a[i]);
		XuatBo2(a[i], a[n-1]);
	}
}