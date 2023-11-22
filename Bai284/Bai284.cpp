#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

float TichDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

int main()
{
	float b[100][100];
	int k, l, d;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Mang sau khi them dong la: \n";
	ThemCot(b, k, l);
	Xuat(b, k, l);
	cout << endl;

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << fixed << setprecision(2) << setw(14) << a[i][j];
		cout << endl;
	}
}

float TichDong(float a[][100], int m, int n, int d)
{
	if (n == 1)
		return a[d][0];
	return TichDong(a, m, n - 1, d) * a[d][n - 1];
}

void ThemCot(float a[][100], int m, int& n)
{
	if (m == 0)
	{
		n++;
		return;
	}
	ThemCot(a, m - 1, n);
	a[m - 1][n - 1] = TichDong(a, m, n - 1, m - 1);
}