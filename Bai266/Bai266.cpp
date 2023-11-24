#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);

void LietKe(float[], int);

int main()
{
    float b[100];
    int k;

    Nhap(b, k);
    cout << "Mang vua tao la: \n";
    Xuat(b, k);
    cout << endl << endl;

    cout << "Cac day con toan duong co do dai lon hon 1 la: \n";
    LietKe(b, k);
    cout << endl;

    return 0;
}

void Nhap(float a[], int& n)
{
    cout << "Nhap n: ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}

void Xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << setw(8) << a[i];
    }
    cout << endl;
}

void LietKe(float a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
        {
            cout << a[i] << " ";
            for (int j = i + 1; j < n && a[j] > 0; j++)
                cout << a[j] << " ";
            cout << endl;
        }
}