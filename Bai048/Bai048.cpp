#include<iostream>
#include<cmath>
using namespace std;

int Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = Tinh(n);
	cout << "a(n) = " << s;
	return 0;
}

int Tinh(int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return 3;
	int ah = Tinh(n - 1);
	int ahh = Tinh(n - 2);
	return (5 * ah + 6 * ahh);
}