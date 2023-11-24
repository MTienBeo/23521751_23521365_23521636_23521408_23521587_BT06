#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanCuoi(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nGia tri chan cuoi cung: " << ChanCuoi(a, n);

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

int ChanCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (a[n - 1] % 2 == 0)
		return a[n - 1];
	int lc = ChanCuoi(a,n-1);
	return lc;
}