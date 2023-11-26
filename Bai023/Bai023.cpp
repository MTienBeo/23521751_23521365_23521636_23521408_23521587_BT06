#include<iostream>
using namespace std;

int TichChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = TichChuSo(n);
	cout << "s = " << s;
	return 0;
}

int TichChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 1;
	int s = TichChuSo(n / 10);
	int dv = n % 10;
	return (s * dv);
}