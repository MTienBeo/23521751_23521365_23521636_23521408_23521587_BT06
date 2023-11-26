#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
int ChanDau(int[], int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() % 200);
	Xuat(a, n);
	cout << "\n Gia tri chan dau trong mang la: " << ChanDau(a, n);
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

int ChanDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (a[n - 1] % 2 == 0)
		return lc = a[n - 1];
	return -1;

}