#include <iostream>

using namespace std;

template<typename T>
T average(T array[], int size) {
	T sum = T();
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	return sum / T(size);
}

int main()
{
	int intArr[] = { 1, 2, 3, 4, 5 };
	double avgInt = average(intArr, 5);
	std::cout << "Average int: " << avgInt << std::endl;

	double dblArr[] = { 1.5, 2.5, 3.5 };
	double avgDbl = average(dblArr, 3);
	std::cout << "Average double: " << avgDbl << std::endl;
}
