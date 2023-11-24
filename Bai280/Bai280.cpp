#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void ThemCot0(float[][100], int, int&, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	int c;
	cout << "\nNhap cot can them 0: ";
	cin >> c;

	ThemCot0(a, m, n, c);
	cout << "\nMa tran sau khi them 0 vao cot " << c << ": \n";
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "\nNhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int  n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(6) << a[m - 1][j];
	cout << endl;
}

void ThemCot0(float a[][100], int m, int& n, int c)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot0(a, m - 1, n, c);
	for (int j = n; j > c; j--)
		a[m - 1][j] = a[m - 1][j - 1];
	a[m - 1][c] = 0;
}