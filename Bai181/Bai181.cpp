#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuatBo2(float, float);
void LietKe(float[], int);

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
void XuatBo2(float x, float y)
{
	cout << setw(10) << setprecision(3);
	cout << "(" << x << "," << y << ")" << endl;
}
void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0;i <= n - 2;i++)
	{
		if (a[i] <= a[n - 1])
			XuatBo2(a[i], a[n - 1]);
		if (a[n - 1] <= a[i])
			XuatBo2(a[n - 1], a[i]);
	}
	LietKe(a, n - 1);
}