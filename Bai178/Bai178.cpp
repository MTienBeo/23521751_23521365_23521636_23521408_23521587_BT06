#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void DichTrai(float[], int);
void HoanVi(float&, float&);

int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	cout << "Mang a: ";
	Xuat(a, n);
	cout << endl;
	DichTrai(a, n);
	cout << "Sau khi dich trai: " << endl;
	Xuat(a, n);
	return 0;
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}
void DichTrai(float a[], int n)
{
	if (n <= 1)
		return;
	DichTrai(a, n - 1);
	HoanVi(a[n - 2], a[n - 1]);
}

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}