#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;


float Tinh(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "Ket qua la: " << Tinh(k);

}

float Tinh(int n)
{
	if (n == 1)
		return 0;
	return pow(n + Tinh(n - 1), (float)1 / n);
}

