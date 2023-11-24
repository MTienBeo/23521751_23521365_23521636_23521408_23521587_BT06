#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nso luong la: " << DemGiaTri(a, n);
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

int DemGiaTri(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		if (a[i] > a[n - 1])
			flag = 0;
	if (flag == 1)
		dem++;
	return dem;
}