#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
int TongDong(int[][100], int, int, int);

int main()
{

	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau\n";
	Xuat(a, m, n);

	int d;
	cout << "\nNhap dong can tinh: ";
	cin >> d;
	cout << "\nTong cac so doi xung tren dong " << d << ": " << TongDong(a, m, n, d);

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "\nNhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
	{
		cout << setw(4) << a[m - 1][j];
	}
	cout << endl;
}

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t = t / 10;
	}
	if (dn == abs(n))
		return 1;
	return 0;
}

int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int S = TongDong(a, m, n - 1, d);
	if (ktDoiXung(a[d][n - 1]))
		S += a[d][n - 1];
	return S;
}