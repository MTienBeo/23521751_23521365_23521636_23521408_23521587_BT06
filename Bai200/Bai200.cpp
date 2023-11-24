#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktHoanThien(int);
void LietKe(int[][100], int, int, int);

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
	cout << "\nCac so hoan thien tren dong " << d << ": ";
	LietKe(a, m, n, d);

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

bool ktHoanThien(int n)
{
	int S = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			S += i;
	if (S == n)
		return 1;
	return 0;
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n-1, d);
	if (ktHoanThien(a[d][n-1]))
		cout << setw(4) << a[d][n - 1];
}