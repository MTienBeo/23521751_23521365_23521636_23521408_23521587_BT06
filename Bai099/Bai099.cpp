#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int ktDoiXung(int);
int DemDoiXung(int[], int);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	cout << "So luong cac so doi xung trong mang la: \n";
	cout << DemDoiXung(b, k);
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

int ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t > 0)
	{
		int dv = t % 10;
		dn = dv + dn * 10;
		t /= 10;
	}
	if (dn == n)
		return 1;
	else
		return 0;
}

int DemDoiXung(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemDoiXung(a, n - 1);
	if (ktDoiXung(a[n - 1]))
		dem++;
	return dem;
}