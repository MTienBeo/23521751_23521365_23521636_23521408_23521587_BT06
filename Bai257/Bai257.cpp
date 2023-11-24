#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int ktCotGiam(float[][100], int, int,int);


int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    int c;
    cout << "Nhap cot can kiem tra: ";
    cin >> c;
    if (ktCotGiam(a, m, n, c) == 1)
        cout << "cot giam";
    else
        cout << "cot khong giam";
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

int ktCotGiam(float a[][100], int m, int n, int c)
{
    if (m == 1)
        return 1;
    if (a[m - 2][c] > a[m - 1][c] && ktCotGiam(a, m - 1, n, c) == 1)
        return 1;
    return 0;
}