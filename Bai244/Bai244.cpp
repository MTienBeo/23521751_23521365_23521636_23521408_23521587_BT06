#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

float NhoNhatCot(float[][100], int, int, int);

int main()
{
	float b[100][100];
	int k, l, c;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Nhap cot c: ";
	cin >> c;

	cout << "So nho nhat tren cot c la: \n";
	cout << NhoNhatCot(b, k, l, c);
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

float NhoNhatCot(float a[][100], int m, int n, int c)
{
	if (m == 1)
		return a[0][c];
	float lc = NhoNhatCot(a, m - 1, n, c);
	if (a[m - 1][c] < lc)
		lc = a[m - 1][c];
	return lc;
}