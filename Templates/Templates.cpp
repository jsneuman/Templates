// Jacob Neuman
// 12/4/2021
// CIS 1202 501

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T whole)
{
	T half = whole / 2;

	return half;
}

int half(int whole)
{
	int half = round(static_cast<float>(whole) / 2);
	return half;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}