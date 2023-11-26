#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void XuatCon(float[], int, int, int);
bool ktCon(float[], int, int, int);
void XuatCon(float[], int);
float TongCon(float[], int, int, int);

int main()
{
	int n, k;
	float a[100], x;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	cout << "\nCac mang con tang dan: " << endl;
	XuatCon(a, n);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void XuatCon(float a[], int n, int vt, int l)
{
	if (l == 0)
	{
		return;
	}
	XuatCon(a, n, vt, l - 1);
	cout << setw(10) << a[vt + l-1];
}
void XuatCon(float a[], int n)
{
	if (n ==1)
		return;
	XuatCon(a, n - 1);
	for (int l = 2; l <= n; l++)
		if (ktCon(a, n, n - l, l))
		{
			XuatCon(a, n, n - l, l);
			cout << endl;
			cout << "Tong: " << TongCon(a, n, n - l, l) << endl;
		}
}

bool ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			return false;
	return true;
}

float TongCon(float a[], int n, int vt, int l)
{
	if (l == 0)
		return 0;
	float s = TongCon(a, n, vt, l-1);
	s = s + a[vt + l - 1];
	return s;
}