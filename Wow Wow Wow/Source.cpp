#include<iostream>

using namespace std;

int main() {
	int a;
	cout << "\n Nhap 1 so nguyen duong: ";
	cin >> a;
	if (a > 0 && a < 50)
	{
		cout << "W";
		for (int i = 1; i <= a; i++)
		{
			cout << "o";
		}
		cout << "W";
	}
	return 0;
}