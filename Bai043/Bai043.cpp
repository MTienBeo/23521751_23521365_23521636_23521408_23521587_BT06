#include<iostream>
#include<cmath>
using namespace std;

int ktTangDan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (ktTangDan(n))
		cout << "Cac chu so cua n tang dan tu trai sang phai";
	else
		cout << "Cac chu so cua n khong tang dan tu trai sang phai";
	return 0;
}

int ktTangDan(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (ktTangDan(n/10)&&hc<=dv)
		return 1;
	return 0;
}