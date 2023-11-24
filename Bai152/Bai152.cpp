#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktNguyenTo(int);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100];
	int b[100];
	int k;
	int n;
	Nhap(a, n);
	Xuat(a, n);
	XayDung(a, n, b, k);
	cout << "\nMang b sau khi xay dung la: ";
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

bool ktNguyenTo(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++) 
		if (n % i == 0) 
			return false;	
	return true;
}

void XayDung(int a[], int n, int b[], int& k)
{
	if (n == 0)
	{
		k = 0;
		return;
	}
	XayDung(a, n - 1, b, k);
	if (ktNguyenTo(a[n - 1]))
		b[k++] = a[n - 1];

}