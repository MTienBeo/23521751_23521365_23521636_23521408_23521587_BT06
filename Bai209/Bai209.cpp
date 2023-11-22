#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);

bool ktDang3m(int);
int Tong3m(int[][100], int, int);

int main()
{
	int b[100][100];
	int k, l;
	Nhap(b, k, l);
	cout << "Mang vua tao la: \n";
	Xuat(b, k, l);
	cout << endl << endl;

	cout << "Tong cac gia tri co dang 3m la: \n";
	cout << Tong3m(b, k, l);
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
		if (t % 3 != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		return true;
	return false;
}

int Tong3m(int a[][100], int m, int n)
{
	 if (m == 0)
		return 0;
	int s = Tong3m(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (ktDang3m(a[m - 1][j]))
			s = s + a[m - 1][j];
	return s;
}