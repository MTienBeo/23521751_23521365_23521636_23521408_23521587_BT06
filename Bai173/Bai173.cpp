#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
int DemCon(float[], int, float[], int);

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
	cout << "So lan xuat hien cua mang a trong mang b la: " << DemCon(a, n, b, m);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}
int DemCon(float a[], int n, float b[], int m)
{
	if (n > m)
		return 0;
	int dem = DemCon(a, n, b, m - 1);
	int flag = 1;
	for (int i = 0; i <n; i++)
	{
		if (a[i] != b[m - n + i])
			flag = 0;
	}
	if (flag == 1)
		dem++;
	return dem;
}