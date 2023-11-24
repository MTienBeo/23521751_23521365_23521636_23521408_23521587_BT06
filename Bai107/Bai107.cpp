#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
int TimViTri(float[], int,float);

int main()
{
	float a[100];
	int n;
	int x;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nNhap so x: ";
	cin >> x;
	cout << "vi tri co gia tri gan x nhat la: " << TimViTri(a, n, x);

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

int TimViTri(float a[100], int n,float x)
{
	if (n == 1)
		return 0;
	int lc = TimViTri(a, n - 1,x);
	if (abs(a[n - 1] - x) < abs(a[lc] - x))
		lc = n - 1;
	return lc;
}