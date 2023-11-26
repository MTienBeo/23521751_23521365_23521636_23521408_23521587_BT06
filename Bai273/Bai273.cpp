#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int [][100], int&, int&);
void Xuat(int [][100], int, int);
void SapCotGiam(int [][100], int, int, int c);
void HoanVi(int&, int&);

int main()
{
	int a[100][100], n, m, c;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Nhap cot can sap xep cac phan tu giam dan: ";
	cin >> c;
	SapCotGiam(a, n, m, c);
	cout << "Sau khi sap cot giam: \n";
	Xuat(a, n, m);
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

void SapCotGiam(int a[][100], int n, int m, int c)
{
	if (m == 1)
		return;
	for (int i = 0; i < m - 1; i++)
		if (a[i][c - 1] < a[m - 1][c - 1])
			HoanVi(a[i][c-1], a[m - 1][c-1]);
	SapCotGiam(a, m - 1, n, c);
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
