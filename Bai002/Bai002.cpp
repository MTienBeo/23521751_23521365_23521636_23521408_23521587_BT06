#include <iostream>
using namespace std;


float Tong(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "Tong la: " << Tong(k);

}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s+(float)1 / n );
}