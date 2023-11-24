#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nCac gia tri thoa man: ";
	LietKe(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = ((float)rand() / RAND_MAX) * 200 - 100;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(2) << setw(10) << a[n - 1];
}

void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	if (a[n - 2] > a[n - 3] && a[n - 2] < abs(a[n - 1]))
		cout << setw(10) << setprecision(3) << a[n - 2];
	LietKe(a, n - 1);
}