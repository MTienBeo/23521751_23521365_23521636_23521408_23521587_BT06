#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;


float TinhAn(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "Ket qua la: " << TinhAn(k);

}

float TinhAn(int n)
{
	if (n == 1)
		return 2;
	float at = TinhAn(n - 1);
	return (-9 * at - 24) / (5 * at + 13);
}