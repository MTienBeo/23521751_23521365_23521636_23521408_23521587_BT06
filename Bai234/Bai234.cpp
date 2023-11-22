#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool ktToanLe(int);
int DemToanLe(int[][100], int, int, int);

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

	cout << "So cac so toan le tren dong d la: \n";
	cout << DemToanLe(b, k, l, d);
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

bool ktToanLe(int n)
{
	int flag = 1;
	int i = 0;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return true;
	return false;
}

int DemToanLe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return 0;
	int dem = DemToanLe(a, m, n - 1, d);
	if (ktToanLe(a[d][n - 1]))
		dem = dem + 1;
	return dem;
}