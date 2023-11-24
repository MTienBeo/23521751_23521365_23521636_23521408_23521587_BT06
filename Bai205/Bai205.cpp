#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int TichLe(int[][100], int, int);

int main()
{

	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau\n";
	Xuat(a, m, n);

	cout << "\nTich gia tri le tai chi so dong chan: " << TichLe(a, m, n);

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
	{
		cout << setw(4) << a[m - 1][j];
	}
	cout << endl;
}

int TichLe(int a[][100], int m, int n)
{
	if ((m - 1) % 2 != 0)
	{
		TichLe(a, m - 1, n);
		return 1;
	}
	if (m < 0)
		return 1;
	int T = TichLe(a, m - 2, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j]%2!=0)
			T *= a[m-1][j];
	return T;
}