#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaPhanTu(int[], int& n,int);
void XoaAm(int[], int,int[],int&);

int main()
{
	int a[100], b[100];
	int n, k;
	Nhap(a, n);
	Xuat(a, n);
	XoaAm(a, n, b, k);
	cout << "\nMang sau khi xoa la: ";
	Xuat(b, k);


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

void XoaPhanTu(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaAm(int a[], int n,int b[],int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XoaAm(a, n - 1, b, k);
	if (a[n - 1] > 0)
		b[k++] = a[n-1];
}