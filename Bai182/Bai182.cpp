#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XuatBoBa(float, float, float);
void LietKe(float a[], int n);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Cac bo ba la: ";
	LietKe(a, n);
	return 0;
}

void Nhap(float a[100], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a" << i << ": ";
		cin >> a[i];
	}
}

void Xuat(float a[100], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

void XuatBoBa(float x, float y, float z)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}

void LietKe(float a[], int n)
{
	if (n <= 2)
		return;
	for (int i = 0; i <= n - 3; i++)
		for (int j = i + 1; j <= n - 2; j++)
		{
			if (a[i] == (a[j] + a[n - 1]))
			{
				XuatBoBa(a[i], a[j], a[n - 1]);
				XuatBoBa(a[i], a[n-1], a[j]);
			}
			if (a[j] == a[i] + a[n - 1])
			{
				XuatBoBa(a[j], a[i], a[n - 1]);
				XuatBoBa(a[j], a[n - 1], a[j]);
			}
			if (a[n - 1] == a[i] + a[j])
			{
				XuatBoBa(a[n - 1], a[i], a[j]);
				XuatBoBa(a[n - 1], a[j], a[i]);
			}
		}
	LietKe(a, n - 1);
}