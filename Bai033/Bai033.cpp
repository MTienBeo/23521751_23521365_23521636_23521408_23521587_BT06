#include<iostream>
#include<cmath>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tinh(n);
	cout << "s = " << s;
	return 0;
}

float Tinh(int n)
{
	if (n == 1)
		return 2;
	return (Tinh(n - 1) * Tinh(n - 1) + 2) / (2 * Tinh(n - 1));
}