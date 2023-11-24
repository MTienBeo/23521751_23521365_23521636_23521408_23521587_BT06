#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Tinhan(int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;

	cout << "\nan = " << Tinhan(n) << endl;

	return 0;
}

int Tinhan(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	return 5 * Tinhan(n - 1) - Tinhan(n - 2);
}