#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Xuat(int[], int);
int ktTonTaiNguyenTo(int[], int);
bool ktNguyenTo(int);
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
	cout << "\n Kiem tra ton tai so nguyen to trong mang: " << ktTonTaiNguyenTo(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}


int ktTonTaiNguyenTo(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = ktTonTaiNguyenTo(a, n-1);
	if (ktNguyenTo(a[n - 1]))
		return 1;
	return lc;
}

bool ktNguyenTo(int k)
{
	if (k <= 1)
		return false;
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;

	}
	return (dem == 2);
}

