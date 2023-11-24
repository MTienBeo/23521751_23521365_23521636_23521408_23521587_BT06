#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
int DemGiaTri(int[][100], int, int);


int main()
{
    int a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "\nSo luong gia tri chan la: " << DemGiaTri(a, m, n);
    return 0;
}



void Nhap(int a[][100], int& m, int& n)
{
    cout << "Nhap so hang m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
}

void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(8) << a[i][j];
        }
        cout << "\n";
    }
}

int DemGiaTri(int a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    int dem = DemGiaTri(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] % 2 == 0)
            dem++;
    return dem;
}