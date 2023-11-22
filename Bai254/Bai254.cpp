#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool ktHoanThien(int);
int TonTaiHoanThien(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	if (TonTaiHoanThien(b, k, l) == 1)
		cout << "Ma tran ton tai so hoan thien";
	else
		cout << "Ma tran khong ton tai so hoan thien";
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

bool ktHoanThien(int n)
{
	if (n <= 0)
		return false;
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s += i;
		i++;
	}
	if (s == n)
		return true;
	return false;
}

int TonTaiHoanThien(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	for (int j = 0; j < n; j++)
		if (ktHoanThien(a[m - 1][j]))
			return 1;
	return TonTaiHoanThien(a, m - 1, n);
}