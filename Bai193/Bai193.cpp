#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100], n, m;
	Nhap(a, n, m);	
	Xuat(a, n, m);
	cout << "Cac gia tri le tren dong co chi so chan:\n";
	LietKe(a, n, m);
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
			a[i][j] = -100 + rand() % 200;
}

void Xuat(int a[][100], int n, int m)
{
	if (m == 0)
		return;
	Xuat(a, n, m - 1);
	for (int j = 0; j < n; j++)
		cout <<setw(5)<< a[m - 1][j];
	cout << endl;
}

void LietKe(int a[][100], int n, int m)
{
	if (m == 0)
		return;
	LietKe(a, n, m - 1);	
	if (m % 2 != 0)
		return;
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] % 2 != 0)
			cout << setw(8) << a[m - 1][j];
}