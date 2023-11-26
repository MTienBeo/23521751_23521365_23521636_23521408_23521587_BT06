#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(float[], int);
void LietKe(float[], int);
float NhoNhat(float[], int);
int main()
{
	int n;
	float a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
	Xuat(a, n);
	cout << "\n Cac vi tri tri co gia tri nho nhat la: " << endl;
	LietKe(a, n);
}

void Xuat(float a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void LietKe(float a[], int n)
{
	if (n == 0)
		return;
	float lc = NhoNhat(a, n - 1);
	if (lc > a[n - 1])
	{
		cout << setw(6) << n - 1;
		return;
	}
	if (lc == a[n - 1])
		cout << setw(6) << n - 1;
	LietKe(a, n - 1);
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}