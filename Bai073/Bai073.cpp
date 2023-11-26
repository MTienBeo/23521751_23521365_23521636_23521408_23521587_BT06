#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
void LietKe(int[], int);
int ChuSoDau(int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() %200);
	Xuat(a, n);
	cout << "\n Cac so trong mang co chu so dau la so le: " << endl;
	LietKe(a, n);
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ChuSoDau(a[n-1])%2!=0)
		cout << setprecision(3) << setw(10) << a[n - 1];
}

int ChuSoDau(int n)
{
	n = abs(n);
	if (n <= 9)
		return n;
	return ChuSoDau(n / 10);
}