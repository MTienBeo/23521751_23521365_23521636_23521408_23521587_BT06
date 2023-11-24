#include <iostream>
using namespace std;

void Nhap(int[][100], int);
void Xuat(int[][100], int);
bool ktHang(int[][100], int, int, int);
bool ktCot(int[][100], int, int, int);
bool ktCheo(int[][100], int, int, int,int);
bool ktHopLe(int[][100], int, int, int, int);
bool Giai(int[][100], int, int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	int a[100][100];
	Nhap(a, n);
	if (Giai(a, n, 0))
		Xuat(a, n);
	else
		cout << "\nKhong giai duoc";
	return 0;
}


void Nhap(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = 0;
}

void Xuat(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
}

bool ktHang(int a[][100], int n, int x, int d)
{
	for (int i = 0; i < n; i++)
		if (a[d][i] == x)
			return false;
	return true;
}

bool ktCot(int a[][100], int n, int x, int c)
{
	for (int i = 0; i < n; i++)
		if (a[i][c] == x)
			return false;
	return true;
}

bool ktCheo(int a[][100], int n, int x, int d, int c)
{
	for (int i = 0; i < n; i++)
	{
		if (d + i < n && c + i < n && a[d + i][c + i] == x)
			return false;
		if (d - i >= 0 && c - i >= 0 && a[d - i][c - i] == x)
			return false;
	}

	for (int i = 0; i < n; i++)
	{
		if (d + i < n && c - i >= 0 && a[d + i][c - i] == x)
			return false;
		if (d - i >= 0 && c + i < n && a[d - i][c + i] == x)
			return false;
	}

	return true;
}

bool ktHopLe(int a[][100], int n, int x, int d, int c)
{
	return ktHang(a, n, x, d) && ktCot(a, n, x, c) && ktCheo(a, n, x, d, c);
}

bool Giai(int a[][100], int n, int d)
{
	if (d == n)
		return true;

	for (int c = 0; c < n; c++)
	{
		if (ktHopLe(a, n, 1, d, c))
		{
			a[d][c] = 1;
			if (Giai(a, n, d + 1))
				return true;
			a[d][c] = 0;
		}
	}
	return false;
}