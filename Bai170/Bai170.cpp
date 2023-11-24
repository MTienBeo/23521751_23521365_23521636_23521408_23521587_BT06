#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
bool ktMangTang(float[], int);
void XayDungCon(float[], int, int, int, float[], int&);
int DemConTang(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nSo luong mang con tang: " << DemConTang(a, n);

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

bool ktMangTang(float a[], int n)
{
	if (n == 1)
		return 1;
	if (a[n - 1] < a[n - 2])
		return 0;
	return ktMangTang(a, n - 1);
}

void XayDungCon(float a[], int n, int vt, int l, float b[], int& k)
{
	if (l == 0)
	{
		k = 0;
		return;
	}
	XayDungCon(a, n, vt, l - 1, b, k);
	b[k++] = a[vt + l - 1];
}

int DemConTang(float a[], int n)
{
	int k;
	float b[100];
	if (n == 0)
		return 0;
	int dem = DemConTang(a, n - 1);
	for (int l = 2; l <= n; l++)
	{
		XayDungCon(a, n, n - l, l, b, k);
		if (ktMangTang(b, k))
			dem++;
	}
	return dem;
}