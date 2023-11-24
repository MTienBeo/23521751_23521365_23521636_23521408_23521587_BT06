#include <iostream>
#include <iomanip>
using namespace std;

float Tong(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nTong la: " << Tong(k);

	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float S = Tong(n - 1);
	return S + n * n * n;
}