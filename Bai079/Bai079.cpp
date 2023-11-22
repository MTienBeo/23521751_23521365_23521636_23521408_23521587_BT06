#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

void LietKe(int[], int);
int ktChinhPhuong(int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "Cac vi tri so chinh phuong la: \n";
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

int ktChinhPhuong(int n)
{
	int flag = 0;
	int i = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i++;
	}
	if (flag == 1)
		return 1;
	return 0;
}

void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktChinhPhuong(a[n - 1]))
		cout << setw(6) << n - 1;
}