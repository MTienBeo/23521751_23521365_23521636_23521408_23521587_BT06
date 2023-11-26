#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void XuatCon(float [], int , int , int);

int main()
{
	int n,k;
	float a[100],x;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	cout << "\nSau khi them gia tri: " << endl;
	XuatCon(a, n, 3, 3);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void XuatCon(float a[], int n, int vt, int l)
{
	if (l == 1)
	{
		cout << a[vt];
		return;
	}
	XuatCon(a, n, vt, l - 1);
	cout << setw(10) << a[vt + l];
}