#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

float LonNhat(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Gia tri lon nhat trong ma tran la: \n";
	cout << LonNhat(b, k, l);
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
			cout << fixed << setprecision(2) << setw(8) << a[i][j];
		cout << endl;
	}
}

float LonNhat(float a[][100], int m, int n)
{
	if (m == 1)
	{
		float lc = a[0][0];
		for (int j = 0; j < n; j++)
		if (a[0][j] > lc)
			lc = a[0][j];
		return lc; 
	}
	float lc = LonNhat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > lc)
			lc = a[m - 1][j];
	return lc;
}