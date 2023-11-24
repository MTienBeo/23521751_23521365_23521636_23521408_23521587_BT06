#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XuLy(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	XuLy(a, m, n);
	cout << "\nMa tran sau khi xu ly cac so am: \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int  n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(6) << a[m - 1][j];
	cout << endl;
}

void XuLy(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	XuLy(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] < 0)
			a[m - 1][j] = abs(a[m - 1][j]);
}
