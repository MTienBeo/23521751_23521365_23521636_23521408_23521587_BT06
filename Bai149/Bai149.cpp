#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int ktBang(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;

	if (ktBang(b, k) == 1)
		cout << "Cac phan tu trong mang bang nhau";
	else
		cout << "Cac phan tu trong mang khong bang nhau";
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

int ktBang(int a[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((a[n - 2] == a[n - 1]) && ktBang(a, n - 1) == 1)
		return 1;
	return 0;
}