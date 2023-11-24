#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float TongDuong(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTong cac so duong trong mang la: " << TongDuong(a, n);

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

float TongDuong(float a[100], int n)
{
	if (n == 0)
		return 0;
	if (a[n - 1] > 0)
		return TongDuong(a, n - 1) + a[n - 1];
	return TongDuong(a, n - 1);
}