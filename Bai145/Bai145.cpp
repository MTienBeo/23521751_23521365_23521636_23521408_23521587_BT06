#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktToanChan(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	if (ktToanChan(a, n))
		cout << "\nMang toan so chan.";
	else
		cout << "\nMang khong toan so chan.";

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

bool ktToanChan(int a[], int n)
{
	if (n == 0)
		return 1;
	if (a[n - 1] % 2 != 0)
		return 0;
	return ktToanChan(a, n - 1);
}