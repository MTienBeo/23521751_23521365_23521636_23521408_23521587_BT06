#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(float[], int);

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
void LietKe(int a[], int n, int x, int y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (a[n - 1] >= x && a[n - 1] <= y && a[n - 1] % 2 == 0)
		cout << setw(6) << a[n - 1];
}