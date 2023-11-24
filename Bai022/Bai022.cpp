#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int TongChuSo(int);

int main()
{
	int k;
	cout << "Nhap so k: ";
	cin >> k;
	cout << "Tong chu so la: " << TongChuSo(k);

}

int TongChuSo(int n)
{
	n = abs(n);
	if (n == 0)
		return 0;
	int dv = n % 10;
	int s = TongChuSo(n / 10);
	return s + dv;
}