#include <iostream>
#include <cmath>

template<typename T>
T equationLine(T a, T b) {
	T x = T();
	x = -b / a;
	return x;
}

template<typename T2>
T2 equationQuad(T2 a, T2 b, T2 c) {
	T2 x1 = T2();
	T2 x2 = T2();
	T2 D = T2();

	if (a == 0) {
		std::cout << "a cannot = 0." << std::endl;
		return 1;
	}

	D = b * b - 4 * a * c;

	if (D > 0) {
		x1 = (-b - sqrt(D)) / 2;
		x2 = (-b + sqrt(D)) / 2;
		std::cout << "x1 = " << x1 << " and x2 = " << x2;
	}
	else if (D == 0) {
		x1 = -b / 2;
		x2 = x1;
		std::cout << "x1 and x2 = " << x1;
	}
	else {
		std::cout << "No equation roots.";
	}
}

int main()
{
	std::cout << "Linear equation result: " << equationLine(2, 4) << std::endl;

	std::cout << "\n";

	equationQuad(1, 3, 10);
}
