#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DuongDau(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nGia tri duong dau tien: " << DuongDau(a, n);

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
		cout << setw(6) << a[i];
}

int DuongDau(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (a[n - 1] > 0)
		return a[n - 1];
	return 0;
}