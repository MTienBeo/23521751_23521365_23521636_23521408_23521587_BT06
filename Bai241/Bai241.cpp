#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
float DuongDau(float[][100], int, int);

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
float DuongDau(float a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = DuongDau(a, m - 1, n);
	if (lc != -1)
		return lc;
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] > 0)
			return a[m - 1][j];
	return -1;
}