#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatCon(int[], int, int, int);
void XuatCon(int[], int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nTat ca cac mang con: ";
	LietKe(a, n);

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}

void XuatCon(int a[], int n, int vt, int l)
{
	if (l == 0)
		return;
	XuatCon(a, n, vt, l - 1);
	cout << setw(4) << a[vt + l - 1];
}

void XuatCon(int a[], int n)
{
	if (n == 0)
		return;
	XuatCon(a, n - 1);
	for (int l = 1; l <= n; l++)
	{
		cout << endl;
		XuatCon(a, n, n - l, l);
	}
}

void LietKe(int a[], int n)
{
	XuatCon(a, n);
}