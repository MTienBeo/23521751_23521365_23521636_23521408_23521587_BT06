#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Tinhak(int);
int Tinhbk(int);


int main()
{
	int k;
	cout << "\nNhap k: ";
	cin >> k;

	cout << "\nak = " << Tinhak(k) << endl;
	cout << "\nbk = " << Tinhbk(k) << endl;

	return 0;
}

int Tinhak(int n)
{
	if (n == 1)
		return 1;
	return 3 * Tinhbk(n - 1) + 2 * Tinhak(n - 1);
}

int Tinhbk(int n)
{
	if (n == 1)
		return 1;
	return 3 * Tinhbk(n - 1) + Tinhak(n - 1);
}