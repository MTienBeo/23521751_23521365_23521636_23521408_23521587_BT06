#include <iostream> 
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TongDuong(float[][100], int, int);

int main()
{
	float a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "\nMa tran ban dau: \n";
	Xuat(a, m, n);

	cout << "\nTong cac so duong trong ma tran: " << setprecision(2) <<TongDuong(a, m, n);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "\nNhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][100], int m, int n)
{
	if (m == 0)
		return;
	Xuat(a, m - 1, n);
	for (int j = 0; j < n; j++)
		cout << setprecision(2) << setw(6) << a[m - 1][j];
}

float TongDuong(float a[][100], int m, int n)
{
	if (m == 0)
		return 0;
	float S = TongDuong(a, m - 1, n);
	for (int j = 0; j < n; j++)
		if (a[m - 1][j] > 0)
			S += a[m - 1][j];
	return S;
}