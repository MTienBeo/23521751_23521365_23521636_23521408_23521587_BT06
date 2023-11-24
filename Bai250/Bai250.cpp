#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDong(float[][100], int, int, int);
float TongLonNhat(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	cout << "\nTong dong lon nhat: " << TongLonNhat(a, m, n);

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

float TongDong(float a[][100], int m, int n, int  d)
{
	if (n == 0)
		return 0;
	float S = TongDong(a, m, n - 1, d);
	return S + a[d][n - 1];
}

float TongLonNhat(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float lc = TongLonNhat(a, m - 1, n);
	if (lc < TongDong(a, m, n, m - 1))
		lc = TongDong(a, m, n, m - 1);
	return lc;
}