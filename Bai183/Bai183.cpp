#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
void XuatKe(int[], int);
int Dem(int[], int);

int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() % 200);
	cout << "Mang a: ";
	Xuat(a, n);
	cout << endl;
	cout << "So cac phan tu ke nhau va cung chan: "<<Dem(a,n) << endl;
	XuatKe(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}
void XuatKe(int a[], int n)
{
	if (n <= 1)
		return;
	XuatKe(a,n-1);
	if (((a[n - 1] % 2) == 0) && ((a[n - 2] % 2) == 0))
		cout << setw(8) << a[n - 2] <<setw(8)<< a[n - 1] << endl;
}

int Dem(int a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = Dem(a, n - 1);
	if (((a[n - 1] % 2) == 0) && ((a[n - 2] % 2) == 0))
		dem++;
	return dem;
}