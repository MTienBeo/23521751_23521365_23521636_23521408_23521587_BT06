#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ChanLonNhat(int[][100], int, int);

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
int ChanLonNhat(int a[][100], int m, int n)
{
	if (m == 0)
		return -1;
	int lc = ChanLonNhat(a, m - 1, n);
	for (int j = 0;j < n;j++)
		if (a[m - 1][j] % 2 == 0)
			if (lc == -1 || a[m - 1][j] > lc)
				lc = a[m - 1][j];
	return lc;
}