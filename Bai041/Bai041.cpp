#include <iostream>
#include <cmath>
using namespace std;

int ktGiam(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktGiam(n) == 1)
		cout << "So giam dan";
	else
		cout << "So khong giam dan \n";
	return 0;
}

int ktGiam(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktGiam(n / 10) && hc >= dv)
		return 1;
	return 0;
}