#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

void LietKe(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;

	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Cac so chinh phuong trong ma tran la: \n";
	LietKe(b, k, l);

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

bool ktChinhPhuong(int n)
{
	int flag = 0;
	int i = 1;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i++;
	}
	if (flag == 1)
		return true;
	return false;
}

void LietKe(int a[][100], int m, int n)
{
	if (m == 0)
		return;
	LietKe(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktChinhPhuong(a[m - 1][j]))
			cout << setw(4) << a[m - 1][j];
}