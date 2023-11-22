#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "Cac so co chu so dau tien la so chan la: \n";
	LietKe(b, k);
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

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n - 1]) % 2 == 0)
		cout << setw(5) << a[n - 1];
}