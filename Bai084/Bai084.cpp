#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void LietKe(float[], int);

int main()
{
	float b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "Cac so trong mang thoa dieu kien la: \n";
	LietKe(b, k);
	cout << endl;

	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << fixed << setprecision(2) << setw(8) << a[n - 1];
}

void LietKe(float a[], int n)
{
	if (n <= 1)
		return;
	if (a[n - 2] > abs(a[n - 1]))
		cout << setw(10) << setprecision(3) << a[n - 2];
	LietKe(a, n - 1);
}