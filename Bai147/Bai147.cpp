#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktTangDan(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	if (ktTangDan(a, n) == 0)
		cout << "Khong tang";
	else
		cout << "Tang dan";
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

int ktTangDan(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (a[n - 2] <= a[n - 1] && ktTangDan(a, n - 1) == 1)
		return 1;
	return 0;
}