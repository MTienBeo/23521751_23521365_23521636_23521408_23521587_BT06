#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool ktDang3m(int);
void LietKe(int[][100], int, int, int);

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

	cout << "Cac so co dang 3m tren dong d la: \n";
	LietKe(b, k, l, d);
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

bool ktDang3m(int n)
{
	int flag = 1;
	if (n <= 0)
		return false;
	int t = abs(n);
	while (t > 1)
	{
		if (t%3 != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		return true;
	return false;
}

void LietKe(int a[][100], int m, int n, int d)
{
	if (n == 0)
		return;
	LietKe(a, m, n - 1, d);
	if (ktDang3m(a[d][n - 1]))
		cout << setw(4) << a[d][n - 1];
}