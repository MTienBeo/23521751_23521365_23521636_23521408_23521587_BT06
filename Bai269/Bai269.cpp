#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

void HoanViCot(float[][100], int, int, int, int);

int main()
{
	float b[100][100];
	int k, l, c1, c2;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Nhap cot c1: ";
	cin >> c1;
	cout << "Nhap cot c2: ";
	cin >> c2;

	cout << "Ma tran sau khi hoan vi c1 voi c2 la: \n";
	HoanViCot(b, k, l, c1, c2);
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
			cout << fixed << setprecision(2) << setw(8) << a[i][j];
		cout << endl;
	}
}

void HoanViCot(float a[][100], int m, int n, int c1, int c2)
{
	if (m == 0)
		return;
	HoanViCot(a, m - 1, n, c1, c2);
	swap(a[m - 1][c1], a[m - 1][c2]);
}