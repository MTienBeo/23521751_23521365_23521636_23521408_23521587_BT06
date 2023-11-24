#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
int DemDang2m(int[][100], int, int);

int main()
{

	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau\n";
	Xuat(a, m, n);

	cout << "\nSo luong so co dang 2^m trong ma tran: " << DemDang2m(a, m, n);

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
		cout << setw(10) << a[m - 1][j];
	}
	cout << endl;
}

bool ktDang2m(int n)
{
	int t = n;
	while (t != 1)
	{
		if (t % 2 != 0)
			return 0;
		t /= 2;
	}
	return 1;
}

int DemDang2m(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemDang2m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang2m(a[m - 1][j]))
			dem++;
	return dem;
}