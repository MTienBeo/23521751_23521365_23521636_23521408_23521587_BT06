#include<iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = Tong(n);
	cout << "s = " << s;
	return 0;
}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + (float)1 / (2 * n));
}