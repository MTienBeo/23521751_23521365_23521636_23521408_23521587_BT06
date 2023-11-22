#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

bool ktHoanThien(int);
int ktTinhChat(int[], int);

int main()
{
	int b[1000];
	int k;

	Nhap(b, k);
	cout << "Mang vua tao la: \n";
	Xuat(b, k);
	cout << endl << endl;
	
	if (ktTinhChat(b, k) == 1)
		cout << "Mang khong ton tai so hoan thien lon hon 256";
	else
		cout << "Mang ton tai so hoan thien lon hon 256";
	cout << endl;

	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 501 - 100;
}

void Xuat(int a[], int n)
{
	if (n == 0)
		return;
	Xuat(a, n - 1);
	cout << setw(6) << a[n - 1];
}

bool ktHoanThien(int n)
{
	int s = 0;
	int i = 1;
	while (i <= 0)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		return true;
	return false;
}

int ktTinhChat(int a[], int n)
{
	if (n == 0)
		return 1;
	if (ktHoanThien(a[n - 1]) && a[n - 1] > 256)
		return 0;
	return ktTinhChat(a, n - 1);
}