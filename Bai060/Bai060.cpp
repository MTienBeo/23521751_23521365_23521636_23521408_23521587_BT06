#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
int TimX(int[], int, int,int);

int main() 
{
    int n;
    int a[100];
    Nhap(a, n);
    Xuat(a, n);

    int x;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "\nVi tri cua x trong mang: " << TimX(a, x, 0, n - 1);

    return 0;
}

void Nhap(int a[], int& n)
{
    cout << "\nNhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void Xuat(int a[], int n)
{
    if (n == 0)
        return;
    Xuat(a, n - 1);
    cout << setw(5) << a[n - 1];
}

int TimX(int a[], int x, int d, int c)
{
    int g = (d + c) / 2;
    if (a[g] == x)
        return g;
    if (a[g] > x)
        return TimX(a, x, g + 1, c);
    else if (a[g] < x)
        return TimX(a, x, d, g - 1);
    else
        return -1;
}