#include <iostream>
using namespace std;

int DemSoChan(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "So luong so chan la: " << DemSoChan(k);
}

int DemSoChan(int n)
{
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dem = DemSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
		return dem + 1;
	return dem;
}