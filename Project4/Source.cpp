// Lab_03_1.cpp
// < Жураковський Артем >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 5
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B{};
	cout << "x = "; cin >> x;
	A = (1. / abs(x + 2)) + 1;
	if (x < 1)
		B = 7 * x * x + x - 8;
	if (1 >= x && x >= 4) 
		B = 1/tan ((x + 4) / (11));
	if (x > 4)
		B = sqrt(1 + abs(cos(x) * cos(x) * cos(x)));
	y = A + B;
	cout << endl;
	cout << "1)y = " << y << endl;
	// спосіб 2:
	if (x<1)
		B = 7 * x * x + x - 8;
	else
		if (1 >= x && x >= 4)
			B = 1 / tan((x + 4) / (11));
		else
			if (x > 4)
				B = sqrt(1 + abs(cos(x) * cos(x) * cos(x)));
	y = A + B;
	cout << "2)y = " << y << endl;
	cin.get();
	return 0;
}