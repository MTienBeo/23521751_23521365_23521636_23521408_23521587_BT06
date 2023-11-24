#include <iostream>
using namespace std;

int DemChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = DemChuSo(n);
	cout << "Ket qua: " << kq;
	return 1;
}

int DemChuSo(int n)
{
	n = abs(n);
	if (n <= 9)
		return 1;
	int dem = DemChuSo(n / 10);
	return dem + 1;
}