#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nTong la: " << setprecision(6) << Tong(k);

	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float S = Tong(n - 1);
	return S + sqrt(1 + (float)1 / (n * n) + (float)1 / ((n + 1) * (n + 1)));
}