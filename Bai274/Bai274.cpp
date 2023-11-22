#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

void SapDongTang(float[][100], int, int, int);
void SapDongGiam(float[][100], int, int, int);
void SapXep(float[][100], int, int);

int main()
{
    float b[100][100];
    int k, l;
    Nhap(b, k, l);
    cout << "Mang vua tao la: \n";
    Xuat(b, k, l);
    cout << endl << endl;

    cout << "Ma tran sau khi sap xep la: \n";
    SapXep(b, k, l);
    Xuat(b, k, l);
    cout << endl;

    return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << fixed << setprecision(2) << setw(8) << a[i][j];
        cout << endl;
    }
}

void DongTang(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
        if (a[d][j] > a[d][n - 1])
            swap(a[d][j], a[d][n - 1]);
    DongTang(a, m, n - 1, d);
}

void DongGiam(float a[][100], int m, int n, int d)
{
    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
        if (a[d][j] < a[d][n - 1])
            swap(a[d][j], a[d][n - 1]);
    DongGiam(a, m, n - 1, d);
}

void SapXep(float a[][100], int m, int n)
{
    if (m == 0)
        return;
    SapXep(a, m - 1, n);
    if ((m - 1) % 2 == 0)
        DongTang(a, m, n, m - 1);
    else
        DongGiam(a, m, n, m - 1);
}