#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float TinhTong(float[][100], int, int, float, float);


int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    float x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "nhap y:";
    cin >> y;
    cout << "Tong la: " << TinhTong(a, m, n, x, y);
    return 0;
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

float TinhTong(float a[][100], int m, int n,float x,float y)
{
    if (m == 0)
        return 0;
    float s = TinhTong(a, m - 1, n, x, y);
    for (int j = 0; j < n; j++)
        if (a[m - 1][j] > x && a[m - 1][j] < y)
            s = s + a[m - 1][j];
    return s;
}