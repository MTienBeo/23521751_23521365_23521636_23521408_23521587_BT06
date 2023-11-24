#include <iostream>
#include<iomanip>
using namespace std;


float Tong(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "Tong la: "<<fixed <<setprecision(5)<< Tong(k);

}

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + (float)1/(n*(n+1)*(n+2)*(n+3)));
}