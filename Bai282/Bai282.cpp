#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
float NhoNhatDong(float[][100], int, int, int);
void ThemCot(float[][100], int, int&);

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    ThemCot(a, m, n);
    cout << "ma tran sau khi them cot la: " << endl;
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

float NhoNhatDong(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return a[d][0];
    float lc = NhoNhatDong(a, m, n - 1, d);
    if (a[d][n - 1] < lc)
        lc = a[d][n - 1];
    return lc;
}

void ThemCot(float a[][100], int m, int& n)
{
    if (m == 0)
    {
        n++;
        return;
    }
    ThemCot(a, m - 1, n);
    a[m - 1][n - 1] = NhoNhatDong(a, m, n - 1, m - 1);
}