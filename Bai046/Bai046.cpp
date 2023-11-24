#include <iostream>
#include <iomanip>
using namespace std;

int TinhXn(int);
int TinhYn(int);

int TinhYn(int)
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq;
	cout << "\nDay ket qua X: ";
	for (int i = 0; i <= n; i++)
	{
		kq = TinhXn(i);
		cout << setw(8) << kq;
	}
	cout << "\nDay ket qua Y: ";
	for (int i = 0; i <= n; i++)
	{
		kq = TinhYn(i);
		cout << setw(8) << kq;
	}
	return 1;
}

int TinhXn(int n)
{
	if (n == 0)
		return 1;
	return TinhXn(n - 1) + TinhYn(n - 1);
}

int TinhYn(int n)
{
	if (n == 0)
		return 0;
	return 3 * TinhXn(n - 1) + 2 * TinhYn(n - 1);
}

