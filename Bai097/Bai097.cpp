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
	cout << "\nSo luong so co chu so cuoi la 5 : " << DemGiaTri(a, n);

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

int DemGiaTri(int a[100], int n)
{
	if (n == 0)
		return 0;
	int dem = DemGiaTri(a, n - 1);
	if (a[n - 1] % 10==5)
		dem = dem + 1;
	return dem;
}