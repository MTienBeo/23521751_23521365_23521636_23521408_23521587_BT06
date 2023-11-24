#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float TichLe(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nTich cac so le cua k la: " << TichLe(k);

	return 0;
}

float TichLe(int n)
{
	n = abs(n);
	if (n == 0)
		return 1;
	int S = TichLe(n / 10);
	if (n % 2 != 0)
		return S * (n % 10);
	return S;
}