#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
int DemGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\n so luong gia tri lon nhat: " << DemGiaTri(a, n);

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

float LonNhat(float a[100], int n)
{
	if (n == 0)
		return 0;
	int lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		lc = a[n - 1];
	return lc;

}

int DemGiaTri(float a[100], int n)
{
	if (n == 0)
		return 0;
	int lc = LonNhat(a, n - 1);
	if (a[n - 1] > lc)
		return 1;
	int dem = DemGiaTri(a, n - 1);
	if (lc == a[n - 1])
		dem++;
	return dem;
}