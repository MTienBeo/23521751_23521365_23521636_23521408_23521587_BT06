#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
int Tong(int[], int);
int ChuSoChuc(int);
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
	cout << "\n Tong cac gia tri co chu so hang chuc la 5 la: " << Tong(a, n);
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

int Tong(int a[], int n)
{
	if (n == 0)
		return 0;
	int s = Tong(a, n - 1);
	if (ChuSoChuc(a[n - 1]) == 1)
		s = s + a[n - 1];
	return s;

}

int ChuSoChuc(int n)
{
	n = abs(n);
	if ((n / 10) % 10 == 5)
		return 1;
	return 0;
}