#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Cac dong co chua toan gia tri chan la: ";
	LietKe(a, n, m);
	return 0;
}

void Nhap(int a[][100], int& n, int& m)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100 + rand() % 200;
}

void Xuat(int a[][100], int n, int m)
{
	if (m == 0)
		return;
	Xuat(a, n, m - 1);
	for (int j = 0; j < n; j++)
		cout << setw(5) << a[m - 1][j];
	cout << endl;
}

int ktDong(int a[][100], int n, int m, int d)
{
	if (n == 0)
		return 0;
	if (n == 1)
	{
		if (a[d][0] % 2 == 0)
			return 1;
		return 0;
	}
	if (a[d][n - 1] % 2 == 0 && ktDong(a, n - 1, m, d) == 1)
		return 1;
	return 0;
}

void LietKe(int a[][100], int n, int m)
{
	if (m == 0)
		return;
	LietKe(a, n, m - 1);
	if (ktDong(a, m, n, m - 1))
		cout << setw(5) << (m - 1);
}