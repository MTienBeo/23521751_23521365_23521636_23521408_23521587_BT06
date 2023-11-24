#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tinhan(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nKet qua la: " << Tinhan(k);

	return 0;
}

float Tinhan(int n)
{
	if (n == 1)
		return 2;
	int an = Tinhan(n - 1) + 2 * n + 1;
	return an;
}