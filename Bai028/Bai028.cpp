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
	if (n == 0)
		return 0;
	float s = Tinh(n - 1);
	return (pow(n + s, ((float)1 / (n + 1))));
}