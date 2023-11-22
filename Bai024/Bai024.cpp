#include <iostream>
using namespace std;
int TongSoChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac chu so chan cua n la: " << TongSoChan(n) << endl;
	return 0;
}

int TongSoChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 0;
		return n;
	}
	int s = TongSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
		return s + dv;
	return s;
}