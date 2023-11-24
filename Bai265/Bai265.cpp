#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
bool ktDongGiam(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	cout << "\nCac dong toan giam: ";
	LietKe(a, m, n);

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

bool ktDongGiam(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return 1;
	if (a[d][n - 1] > a[d][n - 2])
		return 0;
	return ktDongGiam(a, m, n - 1, d);
}

void LietKe(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	if (ktDongGiam(a, m, n, m - 1))
		cout << setw(4) << m - 1;
}