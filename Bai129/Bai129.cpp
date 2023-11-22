#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

int TimViTri(float[], int);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;

	cout << "Vi tri co gia tri duong nho nhat la: \n" << TimViTri(b, k);;
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

int TimViTri(float a[], int n)
{
	if (n == 0)
		return -1;
	int lc = TimViTri(a, n - 1);
	if (a[n - 1] <= 0)
		return lc;
	if (lc == -1)
		return n - 1;
	if (a[n - 1] < a[lc])
		lc = n - 1;
	return lc;
}
