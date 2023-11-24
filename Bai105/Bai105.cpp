#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nVi tri gia tri nho nhat: " << TimViTri(a, n);

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

int TimViTri(float a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimViTri(a, n - 1);
	if (a[lc] > a[n - 1])
		lc = n - 1;
	return lc;
}