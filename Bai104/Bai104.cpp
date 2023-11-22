#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

float NhoNhat(float[], int);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "So nho nhat trong mang la: \n" << NhoNhat(b, k);;
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

float NhoNhat(float a[], int n)
{
	if (n == 1)
		return a[0];
	float lc = NhoNhat(a, n - 1);
	if (a[n - 1] < lc)
		lc = a[n - 1];
	return lc;
}