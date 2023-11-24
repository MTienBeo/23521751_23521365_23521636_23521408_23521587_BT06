#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int b[100];
	int k;
	Nhap(b, k);
	
	
	cout << "\nMang a ban dau: ";
	Xuat(a, n);
	cout << "\nMang b ban dau: ";
	Xuat(b, k);

	cout << "\nSo lan xuat hien cua a trong b: " << DemXuatHien(a, n, b, k);

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

int DemXuatHien(int a[], int n, int b[], int k)
{
	if (k < n)
		return 0;
	int dem = DemXuatHien(a, n, b, k - 1);
	int j = k - n;
	int flag = 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] != b[i + j])
			flag = 0;
	if (flag)
		return dem + 1;
	else 
		return dem ;
}