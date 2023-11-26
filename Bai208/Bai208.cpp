#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int Tong(int[][100], int, int);
bool ktToanChan(int);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Tong cac gia tri chan trong ma tran la: " << Tong(a, n, m);
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
			a[i][j] = -100 + rand() % 201;
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
int  Tong(int a[][100], int n, int m)
{
	if (m == 0)
		return 0;
	int s = Tong(a, n, m - 1);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}

bool ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return false;
		return true;
	}
	int dv = n % 10;
	if (ktToanChan(n / 10) && dv % 2 == 0)
		return true;
	return false;
}