#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong5m(int[][100], int, int, int);
int ktDang5m(int n);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Nhap dong can tinh cac gia tri chan:  ";
	int c;
	cin >> c;
	cout << "Tong cac gia tri co dang 5m tren dong " << c << " la : " << Tong5m(a, n, m, c);
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
int Tong5m(int a[][100], int n, int m, int c)
{
	if (n == 0)
		return 0;
	int s = Tong5m(a, n - 1, m, c);
	if (ktDang5m(a[c - 1][n - 1]) == 1)
		s = s + a[c - 1][n - 1];
	return s;
}

int ktDang5m(int n)
{
	if (n < 1)
		return false;
	if (n == 1)
		return true;
	if (ktDang5m(n / 5) == 1 && n % 5 == 0)
		return true;
	return false;
}
