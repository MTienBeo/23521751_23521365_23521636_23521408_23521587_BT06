#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void TimDoan(float[], int, float&, float& );
int main()
{
	int n;
	float a[100],x,y;

	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	TimDoan(a, n, x, y);
	cout << "\nMang so thuc chua cac gia tri trong doan [" << x << "," << y << "]";
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void TimDoan(float a[], int n, float& x, float& y)
{
	if (n == 1)
	{
		x = a[0];
		y = a[0];
		return;
	}
	TimDoan(a, n - 1, x, y);
	if (a[n - 1] < x)
		x = a[n - 1];
	if (a[n - 1] > y)
		y = a[n - 1];
}