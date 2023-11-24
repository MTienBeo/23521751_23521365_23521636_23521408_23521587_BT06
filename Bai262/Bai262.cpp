#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktDong(float[][100], int, int, int);
void LietKe(float[][100], int, int);


int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "Cac hang toan so am la: ";
    LietKe(a, m, n);
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

int ktDong(float a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;
    if (n == 1)
    {
        if (a[d][0] < 0)
            return 1;
        else
            return 0;
    }
    if (a[d][n - 1] < 0 && ktDong(a, m, n - 1, d) == 1)
        return 1;
    return 0;
}

void LietKe(float a[][100], int m, int n)
{
    if (m == 0)
        return ;
    LietKe(a, m - 1, n);
    if (ktDong(a, m, n, m - 1) == 1)
        cout << setw(4) << (m - 1);
}
