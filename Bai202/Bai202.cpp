#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDoiXung(int);
void LietKe(int[][100], int, int,int);


int main()
{
    int a[100][100];
    int m, n, c;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "Nhap cot can liet ke: ";
    cin >> c;
    cout << "cac gia tri doi xung la: ";
    LietKe(a, m, n,c);
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

bool ktDoiXung(int n)
{
    int t = n;
    int dn = 0;
    while (t != 0)
    {
        int dv = t % 10;
        dn = dn * 10 + dv;
        t = t / 10;
    }
    if (dn == n)
        return true;
    return false;

}



void LietKe(int a[][100], int m, int n,int c)
{
    if (m == 0)
        return;
    LietKe(a, m-1,n,c);
        if (ktDoiXung(a[m-1][c]))
            cout << setw(4) << a[m - 1][c];

}