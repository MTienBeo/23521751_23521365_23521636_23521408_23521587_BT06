#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float Tinhxn(float, int);

int main() {
    float x;
    cout << "\nNhap x: ";
    cin >> x;

    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "\nS(x, n) = " << Tinhxn(x, n) << endl;

    return 0;
}

float Tinhxn(float x, int n) {
    if (n == 0)
        return x;

    float S = Tinhxn(x, n - 1);
    return S + pow(x, 2 * n + 1);
}