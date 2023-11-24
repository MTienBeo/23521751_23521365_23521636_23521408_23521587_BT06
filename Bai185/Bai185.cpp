#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int DemPhanBiet(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong gia tri phan biet trong mang: " << DemPhanBiet(a, n);

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
		cout << setprecision(2) << setw(6) << a[i];
}

int DemPhanBiet(float a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemPhanBiet(a, n - 1);
	for (int i = 0; i < n - 1; i++)
		if (a[i] == a[n - 1])
			return dem;
	return dem + 1;
}