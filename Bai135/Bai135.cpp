#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanLe(int);
int TimSo(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nSo hoan thien cuoi cung trong mang: " << TimSo(a, n);

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

bool ktToanLe(int n)
{
	int t = abs(n);
	while (t != 0)
	{
		if (t % 2 == 0)
			return 0;
		t /= 10;
	}
	return 1;
}

int TimSo(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = TimSo(a, n - 1);
	if (!ktToanLe(a[n - 1]))
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (ktToanLe(a[n - 1]))
		lc = a[n - 1];
	return lc;
}