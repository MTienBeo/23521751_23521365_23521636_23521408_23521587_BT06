#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void HoanVi(float&, float&);
void SapTangDuong(float[], int);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	SapTangDuong(a, n);
	cout << "\nSau khi sap xep cac so duong trong mang theo thu tu tang dan: " << endl;
	Xuat(a, n);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void SapTangDuong(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i < n; i++)
	{
		if (a[n - 1] > 0 && a[i] > 0 && a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	}
	SapTangDuong(a, n-1);

}
