#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Xuat(float[][100], int, int);
float LonNhatDong(float[][100], int, int, int);

int main()
{
	float a[100][100];
	int n, m, d;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n, m);
	cout << "Nhap dong can tim gia tri lon nhat: ";
	cin >> d;
	cout << "Gia tri lon nhat tren dong " << d << " la: " << LonNhatDong(a, n, m, d);
	return 0;
}

void Xuat(float a[][100], int n, int m)
{
	if (m == 0)
		return;
	Xuat(a, n, m - 1);
	for (int j = 0; j < n; j++)
		cout << setw(10) << setprecision(2)<<fixed<<a[m - 1][j];
	cout << endl;
}

float LonNhatDong(float a[][100], int n, int m, int d)
{
	if (n == 1)
		return a[d][0];
	float lc = LonNhatDong(a, n-1, m, d);
	if (a[d-1][n - 1] > lc)
		lc = a[d-1][n - 1];
	return lc;
}