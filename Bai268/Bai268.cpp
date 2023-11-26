#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void HoanViDong(int[][100], int, int, int, int);
void HoanVi(int&, int&);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	int d1, d2;
	cout << "Nhap hai dong can hoan vi: ";
	cin >> d1;
	cin >> d2;
	cout << "Sau khi hoan vi dong: " << endl;
	HoanViDong(a, n, m, d1,d2);
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



void HoanViDong(int a[][100], int n, int m, int d1, int d2)
{
	if (n == 0)
		return;
	HoanViDong(a, n-1, m, d1, d2);
	HoanVi(a[d1-1][n - 1], a[d2-1][n - 1]);
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}