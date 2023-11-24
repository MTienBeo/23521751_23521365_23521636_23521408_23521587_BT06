#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktHoanThien(int);
int ViTriCuoi(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nVi tri so hoan thien cuoi cung la: " << ViTriCuoi(a, n);

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

bool ktHoanThien(int n)
{
	n = abs(n);
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}

int ViTriCuoi(int a[], int n)
{
	if (n == 0)
		return -1;
	if (ktHoanThien(a[n - 1]))
		return n - 1;
	return ViTriCuoi(a, n - 1);
}