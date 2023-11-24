#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nMang ban dau: ";
	Xuat(a, n);

	cout << "\nGia tri am lon nhat: " << setprecision(2) <<AmLonNhat(a, n);

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(2) << setw(6) << a[n - 1];
}

float AmLonNhat(float a[], int n)
{
	if (n == 0)
		return 0;
	float lc = AmLonNhat(a, n-1);
	if (a[n-1] >= 0)
		return lc;
	if (lc == 0)
		return a[n - 1];
	if (lc < a[n - 1])
		lc = a[n - 1];
	return lc;
}