#include <iostream>
using namespace std;

long double LuyThua(double, int);

int main()
{
	double x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "T(x,n) co ket qua la: " << LuyThua(x, n);
	return 0;
}

long double LuyThua(double x, int n)
{
	if (n == 0)
		return 1;
	float T = LuyThua(x, n - 1);
	return (T * x);
}