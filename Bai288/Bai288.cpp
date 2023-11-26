#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void DichLen(int[][100], int, int);
void DichLenCot(int[][100], int, int, int);


int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Sau khi them dong: " << endl;
	DichLen(a, n, m);
	Xuat(a, n, m);
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



void DichLen(int a[][100], int n, int m)
{
	if (n == 0)
		return;
	DichLen(a, n - 1, m);
	DichLenCot(a, n, m, n - 1);
}

void DichLenCot(int a[][100], int n, int m, int c)
{
	int temp = a[0][c];
	for (int i = 0; i <= m - 2; i++)
		a[i][c] = a[i + 1][c];
	a[m - 1][c] = temp;
}
