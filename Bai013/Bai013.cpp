#include<iostream>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n > INT_MAX)
	{
		cout << "Tran stack";
		return 0;
	}
	int s = Tong(n);
	cout << "s = " << s;
	return 0;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	int s = Tong(n - 1);
	return (s + n * (n + 1));
}