#include<iostream>
#include<iomanip>
using namespace std;

void Xuat(int[], int);
int Dang2mDau(int[], int);
bool ktDang2m(int);
int main()
{
	int n;
	int a[100];
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + (rand() % 200);
	Xuat(a, n);
	cout << "\n Gia tri co dang 2m dau trong mang la: " << Dang2mDau(a, n);
	return 0;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setprecision(3) << setw(10) << a[n - 1];
}

bool ktDang2m(int n)
{
	if (n < 0)
		return false;
	int t = n;
	while (t > 1)
	{
		if (t % 2 != 0)
			return false;
		t = t / 2;
	}
	return true;
}

int Dang2mDau(int a[], int n)
{
	if (n == 0)
		return 0;
	int lc = Dang2mDau(a, n - 1);
	if (lc != 0)
		return lc;
	if (ktDang2m(a[n - 1]))
		return lc = a[n - 1];
	return 0;

}