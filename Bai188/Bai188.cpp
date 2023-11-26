#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
int ktThuoc(float[], int, float[], int);
int TanSuat(float[], int, float);

int main()
{
	int n, m;
	float a[100], b[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Nhap m: ";
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	cout << "Mang a: ";
	Xuat(a, n);
	cout << endl;
	cout << "Mang b: ";
	Xuat(b, m);
	cout << endl;
	cout << "Kiem tra tat cac cac phan tu trong mang a co nam trong mang b:  " << ktThuoc(a, n, b, m);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}
int ktThuoc(float a[], int n, float b[], int m)
{
	if (n == 1)
	{
		if (TanSuat(b, m, a[0]) == 0)
			return 0;
		return 1;
	}
	if (TanSuat(b, m, a[n - 1]) > 0 && ktThuoc(a, n - 1, b, m) == 1)
		return 1;
	return 0;
}

int TanSuat(float a[], int n, float k)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == k)
			dem++;
	return dem;

}