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
float Tinh(float x, int n)
{
	if (n == 0)
		return x;
	float s = Tinh(x, n - 1);
	return (s * (x + n));
}