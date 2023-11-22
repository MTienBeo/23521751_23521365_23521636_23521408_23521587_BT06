#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

int DemToanChan(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "So luong cac so nguyen toan chan la: \n";
	cout << DemToanChan(b, k, l);
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

bool ktToanChan(int n)
{
	int flag = 1;
	int i = 0;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t=t/10;
	}
	if (flag == 1)
		return true;
	return false;
}

int DemToanChan(int a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	int dem = DemToanChan(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktToanChan(a[m - 1][j]))
			dem = dem + 1;
	return dem;
}