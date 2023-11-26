#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
int Dem(float[], float, int);
int main()
{
	int n;
	float a[100], x;
	
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	cout << "\nNhap x: ";
	cin >> x;
	cout << "\n So lan xuat hien cua gia tri x la: " << Dem(a, x, n)<<endl;
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

int Dem(float a[], float x, int n)
{
	if (n == 0)
		return 0;
	int dem = Dem(a, x, n - 1);
	if (a[n - 1] == x)
		dem++;
	return dem;
}

