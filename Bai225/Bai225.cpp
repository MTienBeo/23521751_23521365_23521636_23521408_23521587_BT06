#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktChinhPhuong(int);
int DemChinhPhuong(int[][100], int, int);

int main()
{

	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau\n";
	Xuat(a, m, n);

	cout << "\nSo luong so chinh phuong trong ma tran: " << DemChinhPhuong(a, m, n);

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

bool ktChinhPhuong(int n)
{
	for (int i = 1; i * i <= n; i++)
		if (i * i == n)
			return 1;
	return 0;
}

int DemChinhPhuong(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemChinhPhuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			dem++;
	return dem;
}