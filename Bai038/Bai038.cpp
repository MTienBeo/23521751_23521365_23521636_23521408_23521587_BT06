#include<iostream>
#include<cmath>
using namespace std;

int ChuSoNhoNhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = ChuSoNhoNhat(n);
	cout << "Chu so nho nhat cua so nguyen n la " << s;
	return 0;
}

int ChuSoNhoNhat(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int lc = ChuSoNhoNhat(n/10);
	int dv = n % 10;
	if (dv < lc)
		return dv;
	return lc;
}