#include <iostream>
using namespace std;


float Tinh(int);

int main()
{
	int k;
	cout << "Nhap so: ";
	cin >> k;
	cout << "Tong la: " << Tinh(k);

}

float Tinh(int n)
{
	if (n == 0)
		return 1;
	float t = Tinh(n - 1);
	return (t *( 1 + (float)1 / (n * n)));
}