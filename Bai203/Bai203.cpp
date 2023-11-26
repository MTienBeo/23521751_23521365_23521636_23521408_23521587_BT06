#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int, int);
int ktDang5m(int);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);
	Xuat(a, n, m);
	cout << "Nhap cot can liet ke cac gia tri co dang 5m: ";
	int c;
	cin >> c;
	cout << "Cac gia tri co dang 5m tren cot " << c << " la : \n";
	LietKe(a, n, m, c);
	return 0;
}

void Nhap(int a[][100], int& n, int& m)
{
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][100], int n, int m)
{
	if (m == 0)
		return;
	Xuat(a, n, m - 1);
	for (int j = 0; j < n; j++)
		cout << setw(5) << a[m - 1][j];
	cout << endl;
}
void LietKe(int a[][100], int n, int m, int c)
{
	if (m == 0)
		return;
	LietKe(a, n, m-1, c);
	if (ktDang5m(a[m - 1][c-1])==1)
		cout << setw(5) << a[m - 1][c-1];
}

int ktDang5m(int n)
{
	if (n < 1)
		return false;
	if (n == 1)
		return true;
	if (ktDang5m(n / 5) == 1 && n % 5 == 0)
		return true;
	return false;
}