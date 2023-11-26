#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Xuat(int[], int);
int ChanNhoNhat(int[], int);
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
	cout << "\n Gia tri chan nho nhat trong mang la: " << ChanNhoNhat(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}


int ChanNhoNhat(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChanNhoNhat(a, n - 1);
	if (a[n - 1] % 2 != 0)
		return lc;
	if (lc == -1)
		return a[n-1];
	if (a[n - 1] < lc)
		return a[n - 1];
	return lc;
}