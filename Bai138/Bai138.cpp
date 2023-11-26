#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
int TimUCLN(int[], int);
int UCLN(int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] =rand() % 100;
	Xuat(a, n);
	cout << "\n UCLN trong mang la: " << TimUCLN(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

int UCLN(int x, int y)
{
	while (x * y != 0)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	return x + y;
}

int TimUCLN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimUCLN(a, n - 1);
	lc = UCLN(lc, a[n - 1]);
	return lc;
}