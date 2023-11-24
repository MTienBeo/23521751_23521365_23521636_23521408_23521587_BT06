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
	return sqrt(n + Tinh(n - 1));
}