#include<iostream>
#include<iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int ktCon(int[], int, int, int);
void XuatCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
    int a[100];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    cout << "Cac day con tang dan la: " << endl;
    LietKe(a, n);
    return 0;
}

void Nhap(int a[100], int& n)
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a" << i << ": ";
        cin >> a[i];
    }
}

void Xuat(int a[100], int n)
{
    if (n == 0)
        return;
    Xuat(a, n - 1);
    cout << setw(6) << a[n - 1];
}

int ktCon(int a[], int n, int vt, int l)
{
    int flag = 1;
    for (int i = 0; i < l - 1; i++)
    {
        if (a[vt + i] > a[vt + i + 1])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

void XuatCon(int a[], int n, int vt, int l)
{
    if (l == 0)
        return;
    XuatCon(a, n, vt, l - 1);
    cout << setw(4) << a[vt + l - 1];
}

void LietKe(int a[], int n)
{
    if (n < 2)
        return;
    for (int l = 2; l <= n; l++)
    {
        for (int vt = 0; vt <= n - l; vt++)
        {
            if (ktCon(a, n, vt, l))
            {
                XuatCon(a, n, vt, l);
                cout << endl;
            }
        }
    }
}