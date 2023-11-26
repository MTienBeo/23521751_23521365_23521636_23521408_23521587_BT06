#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
int ChinhPhuongDau(int[], int);
bool ktChinhPhuong(int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() % 200);
	Xuat(a, n);
	cout << "\n Gia tri chinh phuong trong mang la: " << ChinhPhuongDau(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

bool ktChinhPhuong(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int ChinhPhuongDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = ChinhPhuongDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktChinhPhuong(a[n-1]))
		return lc = a[n - 1];
	return -1;

}