#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int DauTien(int[], int, int, int);

int main()
{
	int b[100];
	int k, x, y;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;

	cout << "Nhap x, y: ";
	cin >> x >> y;

	cout << "Gia tri dau tien trong mang thuoc doan (x,y) la: \n";
	cout << DauTien(b, k, x, y);
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

int DauTien(int a[], int n, int x, int y)
{
	if (n == 0)
		return x;
	int lc = DauTien(a, n - 1, x, y);
		if (lc != x)
			return lc;
	if (a[n - 1] > x && a[n - 1] < y)
		return a[n - 1];
	return x;
}