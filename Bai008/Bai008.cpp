#include<iostream>
using namespace std;

int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long long s = GiaiThua(n);
	cout << "s = " << s;
	return 0;
}

int GiaiThua(int n)
{
	if (n == 1)
		return 1;
	float s = GiaiThua(n - 1);
	return (s * n);
}