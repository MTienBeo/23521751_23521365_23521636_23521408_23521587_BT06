#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int TongDau(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nTong cac so duong trong mang la: " << TongDau(a, n);

}

void Nhap(int a[100], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a" << i << ": ";
		cin >> a[i];
	}
}

void Xuat(int a[100], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n/10);
}

int TongDau(int a[100], int n)
{
	if (n == 0)
		return 0;
	int s = TongDau(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		s = s + a[n - 1];
	return s;
}

