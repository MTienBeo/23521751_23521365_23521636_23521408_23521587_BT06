#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemChuSo(int[][100], int, int);
int DemChuSo(int n);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "So luong chu so trong ma tran " << DemChuSo(a, n, m);
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
			a[i][j]= -100 + rand()%200;
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
int DemChuSo(int a[][100], int n, int m)
{
	if (m == 0)
		return 0;
	int s = DemChuSo(a, n, m-1);
	for (int j = 0; j < n; j++)
		s = s + DemChuSo(a[m - 1][j]);
	return s;
}
int DemChuSo(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dem = DemChuSo(n / 10);
	dem++;
	return dem;
}