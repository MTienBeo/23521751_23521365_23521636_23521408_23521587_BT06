#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int bcnn(int, int);
int TimBCNN(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "Boi chung nho nhat cua tat ca cac so trong mang la: \n";
	cout << TimBCNN(b, k);
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

int bcnn(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return abs(a * b) / (m + n);
}

int TimBCNN(int a[], int n)
{
	if (n == 1)
		return a[0];
	int lc = TimBCNN(a, n - 1);
	lc = bcnn(lc, a[n - 1]);
	return lc;
}