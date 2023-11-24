#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int DemNguyenToPhanBiet(int[], int);

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
int DemNguyenToPhanBiet(int a[], int n)
{
	if (n == 0)
		return 0;
	int dem = DemNguyenToPhanBiet(a, n - 1);

	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == a[n - 1])
			flag = 0;
	if (flag == 1 && ktNguyenTo(a[n - 1]))
		dem++;
	return dem;
}