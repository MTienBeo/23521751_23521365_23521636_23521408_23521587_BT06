#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int UocLeLonNhat(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nKet qua la: " << UocLeLonNhat(k);

	return 0;
}

int UocLeLonNhat(int n)
{
	if (n % 2 != 0)
		return n;
	return UocLeLonNhat(n / 2);
}