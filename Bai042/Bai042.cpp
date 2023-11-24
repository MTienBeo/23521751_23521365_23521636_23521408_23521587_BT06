#include <iostream>
#include <cmath>
using namespace std;

int ktToanChan(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	if (ktToanChan(k) == 1)
		cout << "Toan chan";
	else
		cout << "Khong phai";

}

int ktToanChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 != 0)
		return 0;
	return ktToanChan(n / 10);
}