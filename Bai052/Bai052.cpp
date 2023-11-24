#include<iostream>
using namespace std;

float Tinh(float, int);

int main()
{
	float b;
	int k;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap he so: ";
	cin >> k;
	cout << "Ket qua la: " << Tinh(b, k);

}

float Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return (x + 1) * a - x * b;
}