#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
float TongCot(float[][100], int, int, int);
float TongNhoNhat(float[][100], int, int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl;

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 201 - 100;
}
void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}
float TongCot(float a[][100], int m, int n,
	          int c)
{
	if (m == 0)
		return 0;
	return TongCot(a, m - 1, n, c) + a[m - 1][c];
}
float TongNhoNhat(float a[][100], int m, int n)
{
	if (n == 1)
		return TongCot(a, m, n, 0);
	float lc = TongNhoNhat(a, m, n - 1);
	if (TongCot(a, m, n, n - 1) > lc)
		lc = TongCot(a, m, n, n - 1);
	return lc;
}