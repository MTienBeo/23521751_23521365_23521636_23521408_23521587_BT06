#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void ThemBaoToan(float[], int&, float);

int main()
{
	float b[100];
	float x;
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;

	cout << "Nhap x: ";
	cin >> x;

	ThemBaoToan(b, k, x);
	cout << "Mang sau khi them la: \n";
	Xuat(b, k);
	cout << endl;

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(2) << setw(8) << a[n - 1];
}

void ThemBaoToan(float a[], int& n, float x)
{
	if (n == 0)
	{
		a[0] = x;
		n++;
		return;
	}
	if (x >= a[n - 1])
	{
		a[n] = x;
		n++;
		return;
	}
	a[n] = a[n - 1];
	n--;
	ThemBaoToan(a, n, x);
	n++;
}