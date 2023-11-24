#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int HoanThienCuoi(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nSo hoan thien cuoi cung trong mang: " << HoanThienCuoi(a, n);

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

bool ktHoanThien(int n)
{
	int S = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			S += i;
	if (S == n)
		return 1;
	return 0;
}

int HoanThienCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = HoanThienCuoi(a, n - 1);
	if (ktHoanThien(a[n - 1]))
		lc = a[n - 1];
	return lc;
}