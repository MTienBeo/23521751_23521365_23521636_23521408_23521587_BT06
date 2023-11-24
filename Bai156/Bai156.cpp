#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void NguyenToTang(int[], int);

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
void NguyenToTang(int a[], int n)
{
	if (n == 1)
		return;
	for (int i = 0;i <= n - 2;i++)
		if (ktNguyenTo(a[i])&&
			ktNguyenTo(a[n - 1])&&
			a[i] > a[n - 1])
			HoanVi(a[i], a[n - 1]);
	NguyenToTang(a, n - 1);
}