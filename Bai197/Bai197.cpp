#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool ktDang2m(int);
void LietKe(int[][100], int m, int n);


int main()
{
    int a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    cout << "cac gia tri co dang 2m la: ";
    LietKe(a, m, n);
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
    while (t>1)
    {
        int du = t % 2;
        if (du != 0)
            return false;
        t = t / 2;
     
    }
    return true;
}

void LietKe(int a[][100], int m, int n)
{
    if (m == 0)
        return;
    LietKe(a, m - 1, n);
    for (int j = 0; j < n; j++)
        if(ktDang2m(a[m-1][j]))
            cout << setw(4) << a[m - 1][j];

}