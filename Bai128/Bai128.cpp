#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
float DuongNhoNhat(float[], int);
int main()
{
	int n;
	float a[100], x, y;

	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);;
	cout << "\n Gia tri duong nho nhat trong mang la: " << DuongNhoNhat(a, n);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

float DuongNhoNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = DuongNhoNhat(a, n-1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}