#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool ktNguyenTo(int);
int TongDong(int[][100], int, int, int);

int main()
{
	int b[100][100];
	int k, l, d;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Nhap dong d: ";
	cin >> d;

	cout << "Tong cac so nguyen to tren dong d la: \n";
	cout << TongDong(b, k, l, d);
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

bool ktNguyenTo(int n)
{
	if (n <= 0)
		return false;
	int i = 1;
	int uoc = 0;
	while (i <= n)
	{
		if (n % i == 0)
			uoc++;
		i++;
	}
	if (uoc == 2)
		return true;
	return false;
}

int TongDong(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int s = TongDong(a, m, n - 1, d);
	if (ktNguyenTo(a[d][n - 1]))
		s = s + a[d][n - 1];
	return s;
}