#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TongCot(int[][100], int, int, int);

int main()
{

	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau\n";
	Xuat(a, m, n);

	int c;
	cout << "\nNhap cot can tinh: ";
	cin >> c;
	cout << "\nTong cac so doi xung tren cot " << c << ": " << TongCot(a, m, n, c);

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

int TongCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 0;
	int S = TongCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 != 0)
		S += a[m - 1][c];
	return S;
}