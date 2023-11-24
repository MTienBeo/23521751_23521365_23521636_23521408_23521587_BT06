#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktKhong(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	if (ktKhong(a, n))
		cout << "\nMang co so 0.";
	else
		cout << "\nMang khong co so 0.";

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

bool ktKhong(int a[], int n)
{
	if (n == 0)
		return 0;
	if (ktKhong(a, n - 1))
		return 1;
	if (a[n - 1] == 0)
		return 1;
}