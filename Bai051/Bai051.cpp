#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Tong(n);
	return 0;
}
float Tinh(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	float a = Tinh(n - 1);
	float b = Tinh(n - 2);
	return ((1 + n) * a - n * b);
}