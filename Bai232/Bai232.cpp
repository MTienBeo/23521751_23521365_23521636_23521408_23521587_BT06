#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemDuongDong(float[][100], int, int, int);


int main()
{
    float a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    int d;
    cout << "Nhap dong can tinh: ";
    cin >> d;
    cout << "so gia tri duong tren dong la: " << DemDuongDong(a, m, n, d);
    return 0;
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

int DemDuongDong(float a[][100], int m, int n, int d)
{
    if (n == 0)
        return 0;
    int dem = DemDuongDong(a, m, n - 1, d);
    if (a[d][n - 1] > 0)
        dem++;
    return dem;

}