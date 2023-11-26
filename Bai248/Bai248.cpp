#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemNguyenTo(int[][100], int, int);
int ktNguyenTo(int n);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "So luong chu so trong ma tran " << DemNguyenTo(a, n, m);
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
int DemNguyenTo(int a[][100], int n, int m)
{
	if (m == 0)
		return 0;
	int s = DemNguyenTo(a, n, m - 1);
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[m - 1][j]))
			s++;
	return s;
}
int ktNguyenTo(int n)
{
	if (n <= 1)
		return false;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	return (dem == 2);
}