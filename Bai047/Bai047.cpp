#include<iostream>
using namespace std;

int TinhAn(int);
int TinhBn(int);

int main()
{
	int k;
	cout << "Nhap so hang: ";
	cin >> k;
	cout << "Gia tri a la: " << TinhAn(k) << endl;
	cout << "Gia tri b la: " << TinhBn(k);


}

int TinhAn(int n)
{
	if (n == 1)
		return 2;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return x * x + 2 * y * y;
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return 2 * x * y;

}