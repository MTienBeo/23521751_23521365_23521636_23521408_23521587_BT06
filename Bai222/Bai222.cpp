#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
int TinhTong(int[][100], int, int, int);


int main()
{
    int a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    int c;
    cout << "cot can tinh la: ";
    cin >> c;
    cout << "Tong cac gia tri co dang 2m la: " << TinhTong(a, m, n, c);
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

bool ktDang2m(int n)
{
    int t = n;
    while (t > 1)
    {
        int du = t % 2;
        if (du != 0)
            return false;
        t = t / 2;

    }
    return true;
}

int TinhTong(int a[][100], int m, int n, int c)
{
    if (m == 0)
        return 0;
    int s = TinhTong(a, m - 1, n, c);
    if (ktDang2m(a[m - 1][c]))
        s = s + a[m - 1][c];
    return s;
}