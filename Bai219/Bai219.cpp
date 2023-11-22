#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

int TichCot(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, c;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Nhap cot c: ";
	cin >> c;

	cout << "Tich cac so chan tren cot c la: \n";
	cout << TichCot(b, k, l, c);
	cout << endl;

	return 0;
}

void Nhap(int a[][100], int& m, int& n)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 201 - 100;
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << a[i][j];
		cout << endl;
	}
}

int TichCot(int a[][100], int m, int n, int c)
{
	if (m == 0)
		return 1;
	int T = TichCot(a, m - 1, n, c);
	if (a[m - 1][c] % 2 == 0)
		T = T * a[m - 1][c];
	return T;
}