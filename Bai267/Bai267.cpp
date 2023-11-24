#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void XayDung(float[][100], int, int, float[][100], int&, int&);

int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    float b[100][100];
    int k, l;
    XayDung(a, m, n, b, k, l);
    cout << "Ma tran sau khi xay dung la: " << endl;
    Xuat(b, k, l);
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

void XayDung(float a[][100], int m, int n, float b[][100], int& k, int& l)
{
    if (m == 0)
    {
        k = 0;
        l = n;
        return;
    }
    XayDung(a, m - 1, n, b,k, l);
    for (int j = 0; j < n; j++)
        b[m - 1][j] = abs(a[m - 1][j]);
    k++;
}