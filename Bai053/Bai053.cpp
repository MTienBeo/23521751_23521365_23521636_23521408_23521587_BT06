#include<iostream>
#include<cmath>
using namespace std;

float Tinh(float, int);

int main()
{
	int n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tinh(x,n);
	cout << "S = " << s;
	return 0;
}

float Tinh(float x, int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return (1 + x);
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}