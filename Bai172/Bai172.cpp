#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
bool ktCon(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int m, n;
	Nhap(a, m);
	Nhap(b, n);
	Xuat(a, m);
	Xuat(b, n);
	if (ktCon(a, m, b, n))
		cout << "La mang con";
	else
		cout << "khong phai";
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

bool ktCon(int a[], int m, int b[], int n)
{
	if (m == 0)
	{
		return true;
	}
	if (n < m)
	{
		return false;
	}
	// Kiểm tra xem mảng a có bắt đầu từ phần tử tiếp theo của mảng b không
	if (a[0] == b[0])
	{
		return ktCon(a + 1, m - 1, b + 1, n - 1);
	}
	// Kiểm tra xem mảng a có bắt đầu từ phần tử thứ hai của mảng b không
	return ktCon(a, m, b + 1, n - 1);
}