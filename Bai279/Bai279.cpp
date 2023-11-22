#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

void ThemDong(int[][100], int&, int, int d);

int main()
{
	int b[100][100];
	int k, l, d;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Nhap dong d: ";
	cin >> d;

	cout << "Mang sau khi them dong la: \n";
	ThemDong(b, k, l, d);
	Xuat(b, k, l);
	cout << endl;

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

void ThemDong(int a[][100], int& m, int n, int d)
{
	if (n == 0)
	{
		m++;
		return;
	}
	ThemDong(a, m, n - 1, d);
	for (int i = m; i > d; i--)
		a[i][n - 1] = a[i - 1][n - 1];
	a[d][n - 1] = 1;
}