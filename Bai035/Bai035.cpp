#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void DayMuaDa(int);

int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nKet qua la: ";
	DayMuaDa(k);

	return 0;
}

void DayMuaDa(int n)
{
	cout << setw(6) << n;
	if (n == 1)
		return;
	if (n % 2 == 0)
		DayMuaDa(n / 2);
	else
		DayMuaDa(3 * n + 1);
}