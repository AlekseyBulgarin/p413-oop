#include <iostream>

using namespace std;

template<typename T>
T maxValue(T a, T b) {
	return (a > b) ? a : b ;
}



int main()
{
	setlocale(LC_ALL, "RU");

	cout << maxValue(1, 2);
}
