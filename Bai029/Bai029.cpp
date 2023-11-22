#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) co ket qua la: " << Tinh(n) << endl;
	return 0;
}

float Tinh(int n)
{
	if (n == 0)
		return 1;
	return 1 / (1 + Tinh(n - 1));
}