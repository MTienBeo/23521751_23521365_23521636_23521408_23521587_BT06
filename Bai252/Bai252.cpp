#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int TonTaiDuong(float[][100],int, int);


int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    if (TonTaiDuong(a, m, n) == 1)
        cout << "Ton tai";
    else
        cout << "Khong ton tai";
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

int TonTaiDuong(float a[][100], int m, int n)
{
    if (m == 0)
        return 0;
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] > 0)
            return 1;
    return TonTaiDuong ( a, m - 1, n);
}