#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nCac vi tri co gia tri lon nhat la: ";
	LietKe(a, n);

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

float LonNhat(float a[100],int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[100], int n)
{
	if (n == 0)
		return;;
	float lc = LonNhat(a, n - 1);
	if (lc < a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if(lc==a[n-1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
		
}