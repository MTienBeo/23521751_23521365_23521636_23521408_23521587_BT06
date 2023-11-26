#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemHoanThien(int[][100], int, int, int);
bool ktHoanThien(int n);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Nhap dong can tinh cac gia tri chan:  ";
	int c;
	cin >> c;
	cout << "So luong so hoan thien tren dong " << c << " la : " << DemHoanThien(a, n, m, c);
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
			cin>>a[i][j];
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
int DemHoanThien(int a[][100], int n, int m, int c)
{
	if (n == 0)
		return 0;
	int s = DemHoanThien(a, n - 1, m, c);
	if (ktHoanThien(a[c - 1][n - 1]) == 1)
		s = s + 1;
	return s;
}
bool ktHoanThien(int n)
{
	if (n < 1)
		return false;
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			s = s + i;
	}
	if (s == n)
		return true;
	return false;
}