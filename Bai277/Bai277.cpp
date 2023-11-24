#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XoaDong(float[][100], int, int,int);

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    int c;
    cout << "Nhap cot can sap xep: ";
    cin >> c;

}



void Nhap(float a[][100], int& m, int& n)
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

void Xuat(float a[][100], int m, int n)
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

void XoaDong(float a[][100], int& m, int n,int d)
{
    if (n == 0)
    {
        m--;
        return;
    }
    XoaDong(a, m, n - 1, d);
    for (int i = d; i < m - 1;i++)
        a[i][n - 1] = a[i + 1][n - 1];

}