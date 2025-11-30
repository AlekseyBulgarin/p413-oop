#include <iostream>

using namespace std;

template<typename T>
T minValue(T a, T b) {
	return (a < b) ? a : b;
}

int main()
{
	setlocale(LC_ALL, "RU");

	cout << minValue(1, 2);
}
