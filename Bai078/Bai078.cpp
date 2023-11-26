#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
void LietKe(int[], int);
int ktNguyenTo(int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100+  (rand() % 200);
	Xuat(a, n);
	cout << "\n Cac so trong mang la so nguyen to la: " << endl;
	LietKe(a, n);
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktNguyenTo(a[n-1])==1)
		cout << setprecision(3) << setw(10) << a[n - 1];
}

int ktNguyenTo(int n)
{
	if (n < 2)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	else
		return 0;
}