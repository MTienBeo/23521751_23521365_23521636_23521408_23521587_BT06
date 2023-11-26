#include<iostream>
#include<cmath>
using namespace std;

void Tower(int, char, char, char);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Tower(n, 'A', 'B', 'C');
	return 0;
}

void Tower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "\t" << a << "_____" << c << endl;
		return;
	}
	Tower(n - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(n - 1, b, a, c);
}