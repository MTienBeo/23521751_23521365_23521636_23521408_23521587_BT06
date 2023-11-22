#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

bool ktNguyenTo(int);
int NguyenToDau(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "So nguyen to dau tien trong mang la: \n";
	if (NguyenToDau(b, k) == -1)
		cout << 0;
	else 
		cout << NguyenToDau(b, k);
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

bool ktNguyenTo(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[], int n)
{
	if (n == 0)
		return -1;
	int lc = NguyenToDau(a, n - 1);
	if (lc != -1)
		return lc;
	if (ktNguyenTo(a[n - 1]))
		return a[n - 1];
	return -1;
}