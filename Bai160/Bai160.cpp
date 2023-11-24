#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void DuongTangAmGiam(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	DuongTangAmGiam(a, n);
	cout << "\nMang sau khi sap xep: ";
	Xuat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(2) << setw(6) << a[n - 1];
}

void DuongTangAmGiam(float a[], int n)
{
	if (n == 0)
		return;
	for (int i = 0; i < n - 1; i++)
		if (a[n - 1] > 0)
		{
			if (a[i] > 0 && a[i] > a[n - 1])
				swap(a[i], a[n - 1]);
		}
		else if (a[n - 1] < 0)
		{
			if (a[i] < 0 && a[i] < a[n - 1])
				swap(a[i], a[n - 1]);
		}
	DuongTangAmGiam(a, n - 1);
}