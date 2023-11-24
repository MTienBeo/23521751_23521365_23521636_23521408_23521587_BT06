#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void DichXuongCot(float[][100], int, int,int);
void DichXuong(float[][100], int , int );

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "ma tran sau khi dich chuyen: " << endl;
    DichXuong(a, m, n);
    Xuat(a, m, n);
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

void DichXuongCot(float a[][100], int m, int n, int c)
{
    float temp=a[m - 1][c];
    for (int i = m - 1; i >= 1; i--)
        a[i][c] = a[i - 1][c];
    a[0][c] = temp;
}

void DichXuong(float a[][100], int m, int n)
{
    if (n == 0)
        return;
    DichXuong(a, m, n - 1);
    DichXuongCot(a, m, n, n - 1);
}
