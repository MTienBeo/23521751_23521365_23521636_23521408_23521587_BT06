#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktNguyenTo(int);
bool ktDong(int[][100], int, int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	cout << "\nNhap ma tran: ";
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	cout << "\nCac dong cho chua so nguyen to: ";
	LietKe(a, m, n);

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

void Xuat(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setw(5) << a[m-1][j];
	cout << endl;
}

bool ktNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

bool ktDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	if (ktNguyenTo(a[d][n - 1]))
		return 1;
	return ktDong(a, m, n - 1, d);
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDong(a, m, n, m - 1))
		cout << setw(4) << m - 1;
}