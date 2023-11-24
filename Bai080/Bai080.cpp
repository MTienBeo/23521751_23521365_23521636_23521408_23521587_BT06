#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int, float, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);
	float x, y;
	cout << "\nNhap doan x,y: ";
	cin >> x >> y;
	cout << "\nCac gia tri trong [" << x << ";" << y << "]: ";
	LietKe(a, n, x, y);

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

void LietKe(float a[], int n,float x,float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (x <= a[n - 1] && y >= a[n - 1])
		cout << setw(6) << a[n - 1];
}